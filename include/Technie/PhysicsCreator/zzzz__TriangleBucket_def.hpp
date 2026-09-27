#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/TriangleBucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TriangleBucket)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator {
class Triangle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class TriangleBucket;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::TriangleBucket*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::TriangleBucket*, "Technie.PhysicsCreator", "TriangleBucket");
// Dependencies System.Object, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.TriangleBucket
class CORDL_TYPE TriangleBucket : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Area)) float_t  Area;

/// @brief Field averagedCenter, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_averagedCenter, put=__cordl_internal_set_averagedCenter)) ::UnityEngine::Vector3  averagedCenter;

/// @brief Field averagedNormal, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_averagedNormal, put=__cordl_internal_set_averagedNormal)) ::UnityEngine::Vector3  averagedNormal;

/// @brief Field totalArea, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalArea, put=__cordl_internal_set_totalArea)) float_t  totalArea;

/// @brief Field triangles, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_triangles, put=__cordl_internal_set_triangles)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>*  triangles;

/// @brief Method Add, addr 0xadc4dec, size 0x1b4, virtual false, abstract: false, final false
inline void Add(::Technie::PhysicsCreator::TriangleBucket*  otherBucket) ;

/// @brief Method Add, addr 0xadc4d34, size 0xb8, virtual false, abstract: false, final false
inline void Add(::Technie::PhysicsCreator::Triangle*  t) ;

/// @brief Method CalcTotalArea, addr 0xadc4bf4, size 0x140, virtual false, abstract: false, final false
inline void CalcTotalArea() ;

/// @brief Method CalculateNormal, addr 0xadc499c, size 0x258, virtual false, abstract: false, final false
inline void CalculateNormal() ;

/// @brief Method GetAverageCenter, addr 0xadc4fac, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAverageCenter() ;

/// @brief Method GetAverageNormal, addr 0xadc4fa0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAverageNormal() ;

static inline ::Technie::PhysicsCreator::TriangleBucket* New_ctor(::Technie::PhysicsCreator::Triangle*  initialTriangle) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_averagedCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_averagedCenter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_averagedNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_averagedNormal() ;

constexpr float_t const& __cordl_internal_get_totalArea() const;

constexpr float_t& __cordl_internal_get_totalArea() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>* const& __cordl_internal_get_triangles() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>*& __cordl_internal_get_triangles() ;

constexpr void __cordl_internal_set_averagedCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_averagedNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_totalArea(float_t  value) ;

constexpr void __cordl_internal_set_triangles(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>*  value) ;

/// @brief Method .ctor, addr 0xadc4880, size 0x11c, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::Triangle*  initialTriangle) ;

/// @brief Method get_Area, addr 0xadc4878, size 0x8, virtual false, abstract: false, final false
inline float_t get_Area() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangleBucket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangleBucket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangleBucket(TriangleBucket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangleBucket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangleBucket(TriangleBucket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30484};

/// @brief Field triangles, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>*  ___triangles;

/// @brief Field averagedNormal, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___averagedNormal;

/// @brief Field averagedCenter, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___averagedCenter;

/// @brief Field totalArea, offset: 0x30, size: 0x4, def value: None
 float_t  ___totalArea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::TriangleBucket, ___triangles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::TriangleBucket, ___averagedNormal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::TriangleBucket, ___averagedCenter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::TriangleBucket, ___totalArea) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::TriangleBucket) == 0x38, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
