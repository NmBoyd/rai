/*  ------------------------------------------------------------------
    Copyright (c) 2017 Marc Toussaint
    email: marc.toussaint@informatik.uni-stuttgart.de

    This code is distributed under the MIT License.
    Please see <root-path>/LICENSE for details.
    --------------------------------------------------------------  */

#include "feature.h"

struct TM_Contact_ForceIsNormal : Feature {
  int a,b;
  TM_Contact_ForceIsNormal(int aShape, int bShape) : a(aShape), b(bShape) {}
  TM_Contact_ForceIsNormal(const rai::KinematicWorld& K, const char* aShapeName=NULL, const char* bShapeName=NULL)
    : TM_Contact_ForceIsNormal(initIdArg(K,aShapeName), initIdArg(K,bShapeName)){}

  void phi(arr& y, arr& J, const rai::KinematicWorld& K);
  uint dim_phi(const rai::KinematicWorld& K){ return 3; }
  rai::String shortTag(const rai::KinematicWorld& K) { return STRING("ContactConstraints-" <<K.frames(a)->name <<'-' <<K.frames(b)->name); }
};

struct TM_Contact_ForceIsComplementary : Feature {
  int a,b;
  TM_Contact_ForceIsComplementary(int aShape, int bShape) : a(aShape), b(bShape) {}
  TM_Contact_ForceIsComplementary(const rai::KinematicWorld& K, const char* aShapeName=NULL, const char* bShapeName=NULL)
    : TM_Contact_ForceIsComplementary(initIdArg(K,aShapeName), initIdArg(K,bShapeName)){}

  void phi(arr& y, arr& J, const rai::KinematicWorld& K);
  uint dim_phi(const rai::KinematicWorld& K){ return 3; }
  rai::String shortTag(const rai::KinematicWorld& K) { return STRING("ContactConstraints-" <<K.frames(a)->name <<'-' <<K.frames(b)->name); }
};

struct TM_ContactConstraints_Vel : Feature {
  int a,b;
  TM_ContactConstraints_Vel(int aShape, int bShape) : a(aShape), b(bShape) { order=1; }
  TM_ContactConstraints_Vel(const rai::KinematicWorld& K, const char* aShapeName=NULL, const char* bShapeName=NULL)
    : TM_ContactConstraints_Vel(initIdArg(K,aShapeName), initIdArg(K,bShapeName)){}

  void phi(arr& y, arr& J, const rai::KinematicWorld& K){ NIY }
  void phi(arr& y, arr& J, const WorldL& Ktuple);
  uint dim_phi(const rai::KinematicWorld& K);
  rai::String shortTag(const rai::KinematicWorld& K) { return STRING("TM_ContactConstraints_Vel-" <<K.frames(a)->name <<'-' <<K.frames(b)->name); }
};

struct TM_Contact_POAisInIntersection_InEq : Feature {
  int a,b;
  TM_Contact_POAisInIntersection_InEq(int aShape, int bShape) : a(aShape), b(bShape) {}
  TM_Contact_POAisInIntersection_InEq(const rai::KinematicWorld& K, const char* aShapeName=NULL, const char* bShapeName=NULL)
    : TM_Contact_POAisInIntersection_InEq(initIdArg(K,aShapeName), initIdArg(K,bShapeName)){}

  void phi(arr& y, arr& J, const rai::KinematicWorld& K);
  uint dim_phi(const rai::KinematicWorld& K);
  rai::String shortTag(const rai::KinematicWorld& K) { return STRING("ContactConstraints_InEq-" <<K.frames(a)->name <<'-' <<K.frames(b)->name); }
};

struct TM_ContactConstraints_SOS : Feature {
  int a,b;
  TM_ContactConstraints_SOS(int aShape, int bShape) : a(aShape), b(bShape) {}
  TM_ContactConstraints_SOS(const rai::KinematicWorld& K, const char* aShapeName=NULL, const char* bShapeName=NULL)
    : TM_ContactConstraints_SOS(initIdArg(K,aShapeName), initIdArg(K,bShapeName)){}

  void phi(arr& y, arr& J, const rai::KinematicWorld& K);
  uint dim_phi(const rai::KinematicWorld& K);
  rai::String shortTag(const rai::KinematicWorld& K) { return STRING("ContactConstraints_SOS-" <<K.frames(a)->name <<'-' <<K.frames(b)->name); }
};
