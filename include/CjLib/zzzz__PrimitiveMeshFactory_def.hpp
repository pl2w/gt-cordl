#pragma once
// IWYU pragma private; include "CjLib/PrimitiveMeshFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveMeshFactory)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace CjLib {
class PrimitiveMeshFactory;
}
// Write type traits
MARK_REF_T(::CjLib::PrimitiveMeshFactory*);
DEFINE_IL2CPP_CLASS(::CjLib::PrimitiveMeshFactory*, "CjLib", "PrimitiveMeshFactory");
// Dependencies System.Object
namespace CjLib {
// Is value type: false
// CS Name: CjLib.PrimitiveMeshFactory
class CORDL_TYPE PrimitiveMeshFactory : public ::System::Object {
public:
// Declarations
/// @brief Field s_boxFlatShadedMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_boxFlatShadedMesh, put=setStaticF_s_boxFlatShadedMesh)) ::UnityW<::UnityEngine::Mesh>  s_boxFlatShadedMesh;

/// @brief Field s_boxSolidColorMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_boxSolidColorMesh, put=setStaticF_s_boxSolidColorMesh)) ::UnityW<::UnityEngine::Mesh>  s_boxSolidColorMesh;

/// @brief Field s_boxWireframeMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_boxWireframeMesh, put=setStaticF_s_boxWireframeMesh)) ::UnityW<::UnityEngine::Mesh>  s_boxWireframeMesh;

/// @brief Field s_capsule2dFlatShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_capsule2dFlatShadedMeshPool, put=setStaticF_s_capsule2dFlatShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_capsule2dFlatShadedMeshPool;

/// @brief Field s_capsule2dSolidColorMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_capsule2dSolidColorMeshPool, put=setStaticF_s_capsule2dSolidColorMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_capsule2dSolidColorMeshPool;

/// @brief Field s_capsule2dWireframeMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_capsule2dWireframeMeshPool, put=setStaticF_s_capsule2dWireframeMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_capsule2dWireframeMeshPool;

/// @brief Field s_capsuleFlatShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_capsuleFlatShadedMeshPool, put=setStaticF_s_capsuleFlatShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_capsuleFlatShadedMeshPool;

/// @brief Field s_capsuleSmoothShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_capsuleSmoothShadedMeshPool, put=setStaticF_s_capsuleSmoothShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_capsuleSmoothShadedMeshPool;

/// @brief Field s_capsuleSolidColorMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_capsuleSolidColorMeshPool, put=setStaticF_s_capsuleSolidColorMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_capsuleSolidColorMeshPool;

/// @brief Field s_capsuleWireframeMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_capsuleWireframeMeshPool, put=setStaticF_s_capsuleWireframeMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_capsuleWireframeMeshPool;

/// @brief Field s_circleFlatShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_circleFlatShadedMeshPool, put=setStaticF_s_circleFlatShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_circleFlatShadedMeshPool;

/// @brief Field s_circleSolidColorMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_circleSolidColorMeshPool, put=setStaticF_s_circleSolidColorMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_circleSolidColorMeshPool;

/// @brief Field s_circleWireframeMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_circleWireframeMeshPool, put=setStaticF_s_circleWireframeMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_circleWireframeMeshPool;

/// @brief Field s_coneFlatShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_coneFlatShadedMeshPool, put=setStaticF_s_coneFlatShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_coneFlatShadedMeshPool;

/// @brief Field s_coneSmoothhadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_coneSmoothhadedMeshPool, put=setStaticF_s_coneSmoothhadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_coneSmoothhadedMeshPool;

/// @brief Field s_coneSolidColorMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_coneSolidColorMeshPool, put=setStaticF_s_coneSolidColorMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_coneSolidColorMeshPool;

/// @brief Field s_coneWireframeMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_coneWireframeMeshPool, put=setStaticF_s_coneWireframeMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_coneWireframeMeshPool;

/// @brief Field s_cylinderFlatShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cylinderFlatShadedMeshPool, put=setStaticF_s_cylinderFlatShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_cylinderFlatShadedMeshPool;

/// @brief Field s_cylinderSmoothShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cylinderSmoothShadedMeshPool, put=setStaticF_s_cylinderSmoothShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_cylinderSmoothShadedMeshPool;

/// @brief Field s_cylinderSolidColorMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cylinderSolidColorMeshPool, put=setStaticF_s_cylinderSolidColorMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_cylinderSolidColorMeshPool;

/// @brief Field s_cylinderWireframeMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cylinderWireframeMeshPool, put=setStaticF_s_cylinderWireframeMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_cylinderWireframeMeshPool;

/// @brief Field s_iPooledMesh, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_iPooledMesh, put=setStaticF_s_iPooledMesh)) int32_t  s_iPooledMesh;

/// @brief Field s_lastDrawLineFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_lastDrawLineFrame, put=setStaticF_s_lastDrawLineFrame)) int32_t  s_lastDrawLineFrame;

/// @brief Field s_lineMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_lineMeshPool, put=setStaticF_s_lineMeshPool)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  s_lineMeshPool;

/// @brief Field s_rectFlatShadedMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_rectFlatShadedMesh, put=setStaticF_s_rectFlatShadedMesh)) ::UnityW<::UnityEngine::Mesh>  s_rectFlatShadedMesh;

/// @brief Field s_rectSolidColorMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_rectSolidColorMesh, put=setStaticF_s_rectSolidColorMesh)) ::UnityW<::UnityEngine::Mesh>  s_rectSolidColorMesh;

/// @brief Field s_rectWireframeMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_rectWireframeMesh, put=setStaticF_s_rectWireframeMesh)) ::UnityW<::UnityEngine::Mesh>  s_rectWireframeMesh;

/// @brief Field s_sphereFlatShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sphereFlatShadedMeshPool, put=setStaticF_s_sphereFlatShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_sphereFlatShadedMeshPool;

/// @brief Field s_sphereSmoothShadedMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sphereSmoothShadedMeshPool, put=setStaticF_s_sphereSmoothShadedMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_sphereSmoothShadedMeshPool;

/// @brief Field s_sphereSolidColorMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sphereSolidColorMeshPool, put=setStaticF_s_sphereSolidColorMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_sphereSolidColorMeshPool;

/// @brief Field s_sphereWireframeMeshPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sphereWireframeMeshPool, put=setStaticF_s_sphereWireframeMeshPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  s_sphereWireframeMeshPool;

/// @brief Method BoxFlatShaded, addr 0x5de4b10, size 0xd64, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> BoxFlatShaded() ;

/// @brief Method BoxSolidColor, addr 0x5de48b8, size 0x258, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> BoxSolidColor() ;

/// @brief Method BoxWireframe, addr 0x5de4644, size 0x274, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> BoxWireframe() ;

/// @brief Method Capsule2DFlatShaded, addr 0x5df0a0c, size 0x5d0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> Capsule2DFlatShaded(int32_t  capSegments) ;

/// @brief Method Capsule2DSolidColor, addr 0x5df0508, size 0x504, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> Capsule2DSolidColor(int32_t  capSegments) ;

/// @brief Method Capsule2DWireframe, addr 0x5df0058, size 0x4b0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> Capsule2DWireframe(int32_t  capSegments) ;

/// @brief Method CapsuleFlatShaded, addr 0x5dedc50, size 0x11bc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CapsuleFlatShaded(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides) ;

/// @brief Method CapsuleSmoothShaded, addr 0x5deee0c, size 0xa54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CapsuleSmoothShaded(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides) ;

/// @brief Method CapsuleSolidColor, addr 0x5ded2e4, size 0x96c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CapsuleSolidColor(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides) ;

/// @brief Method CapsuleWireframe, addr 0x5decab8, size 0x82c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CapsuleWireframe(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides) ;

/// @brief Method CircleFlatShaded, addr 0x5de7124, size 0x6fc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CircleFlatShaded(int32_t  numSegments) ;

/// @brief Method CircleSolidColor, addr 0x5de6c2c, size 0x4f8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CircleSolidColor(int32_t  numSegments) ;

/// @brief Method CircleWireframe, addr 0x5de67ec, size 0x440, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CircleWireframe(int32_t  numSegments) ;

/// @brief Method ConeFlatShaded, addr 0x5df1cb0, size 0x77c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> ConeFlatShaded(int32_t  numSegments) ;

/// @brief Method ConeSmoothShaded, addr 0x5df242c, size 0x610, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> ConeSmoothShaded(int32_t  numSegments) ;

/// @brief Method ConeSolidColor, addr 0x5df17ec, size 0x4c4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> ConeSolidColor(int32_t  numSegments) ;

/// @brief Method ConeWireframe, addr 0x5df1344, size 0x4a8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> ConeWireframe(int32_t  numSegments) ;

/// @brief Method CylinderFlatShaded, addr 0x5de87d8, size 0x9c0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CylinderFlatShaded(int32_t  numSegments) ;

/// @brief Method CylinderSmoothShaded, addr 0x5de9198, size 0x790, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CylinderSmoothShaded(int32_t  numSegments) ;

/// @brief Method CylinderSolidColor, addr 0x5de81c4, size 0x614, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CylinderSolidColor(int32_t  numSegments) ;

/// @brief Method CylinderWireframe, addr 0x5de7c9c, size 0x528, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CylinderWireframe(int32_t  numSegments) ;

/// @brief Method GetPooledLineMesh, addr 0x5df5034, size 0x454, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetPooledLineMesh() ;

/// @brief Method Line, addr 0x5de33b4, size 0x190, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> Line(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1) ;

/// @brief Method LineStrip, addr 0x5de3bb4, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> LineStrip(::ArrayW<::UnityEngine::Vector3>  aVert) ;

/// @brief Method Lines, addr 0x5de37d8, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> Lines(::ArrayW<::UnityEngine::Vector3>  aVert) ;

static inline ::CjLib::PrimitiveMeshFactory* New_ctor() ;

/// @brief Method RectFlatShaded, addr 0x5de5fd0, size 0x31c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> RectFlatShaded() ;

/// @brief Method RectSolidColor, addr 0x5de5dc4, size 0x20c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> RectSolidColor() ;

/// @brief Method RectWireframe, addr 0x5de5b9c, size 0x228, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> RectWireframe() ;

/// @brief Method SphereFlatShaded, addr 0x5deab74, size 0xed0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> SphereFlatShaded(int32_t  latSegments, int32_t  longSegments) ;

/// @brief Method SphereSmoothShaded, addr 0x5deba44, size 0x838, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> SphereSmoothShaded(int32_t  latSegments, int32_t  longSegments) ;

/// @brief Method SphereSolidColor, addr 0x5dea440, size 0x734, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> SphereSolidColor(int32_t  latSegments, int32_t  longSegments) ;

/// @brief Method SphereWireframe, addr 0x5de9da0, size 0x6a0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> SphereWireframe(int32_t  latSegments, int32_t  longSegments) ;

/// @brief Method .ctor, addr 0x5df5488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_boxFlatShadedMesh() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_boxSolidColorMesh() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_boxWireframeMesh() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_capsule2dFlatShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_capsule2dSolidColorMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_capsule2dWireframeMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_capsuleFlatShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_capsuleSmoothShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_capsuleSolidColorMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_capsuleWireframeMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_circleFlatShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_circleSolidColorMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_circleWireframeMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_coneFlatShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_coneSmoothhadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_coneSolidColorMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_coneWireframeMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_cylinderFlatShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_cylinderSmoothShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_cylinderSolidColorMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_cylinderWireframeMeshPool() ;

static inline int32_t getStaticF_s_iPooledMesh() ;

static inline int32_t getStaticF_s_lastDrawLineFrame() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* getStaticF_s_lineMeshPool() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_rectFlatShadedMesh() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_rectSolidColorMesh() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_rectWireframeMesh() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_sphereFlatShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_sphereSmoothShadedMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_sphereSolidColorMeshPool() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_sphereWireframeMeshPool() ;

static inline void setStaticF_s_boxFlatShadedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_boxSolidColorMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_boxWireframeMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_capsule2dFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_capsule2dSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_capsule2dWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_capsuleFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_capsuleSmoothShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_capsuleSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_capsuleWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_circleFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_circleSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_circleWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_coneFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_coneSmoothhadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_coneSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_coneWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_cylinderFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_cylinderSmoothShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_cylinderSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_cylinderWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_iPooledMesh(int32_t  value) ;

static inline void setStaticF_s_lastDrawLineFrame(int32_t  value) ;

static inline void setStaticF_s_lineMeshPool(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_rectFlatShadedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_rectSolidColorMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_rectWireframeMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_sphereFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_sphereSmoothShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_sphereSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_s_sphereWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitiveMeshFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveMeshFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitiveMeshFactory(PrimitiveMeshFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveMeshFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitiveMeshFactory(PrimitiveMeshFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CjLib::PrimitiveMeshFactory) == 0x10, "Size mismatch!");

} // namespace end def CjLib
