#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/SphereUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SphereUtils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator {
class SphereUtils_Support;
}
namespace Technie::PhysicsCreator {
class Sphere;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class SphereUtils;
}
namespace Technie::PhysicsCreator {
class SphereUtils_Support;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::SphereUtils*);
MARK_REF_T(::Technie::PhysicsCreator::SphereUtils_Support*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::SphereUtils*, "Technie.PhysicsCreator", "SphereUtils");
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::SphereUtils_Support*, "Technie.PhysicsCreator", "SphereUtils/Support");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.SphereUtils
class CORDL_TYPE SphereUtils : public ::System::Object {
public:
// Declarations
using Support = ::Technie::PhysicsCreator::SphereUtils_Support;

/// @brief Method ExactSphere1, addr 0xadd35fc, size 0x84, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* ExactSphere1(::UnityEngine::Vector3  rkP) ;

/// @brief Method ExactSphere2, addr 0xadd3680, size 0xd8, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* ExactSphere2(::UnityEngine::Vector3  rkP0, ::UnityEngine::Vector3  rkP1) ;

/// @brief Method ExactSphere3, addr 0xadd3758, size 0x1f0, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* ExactSphere3(::UnityEngine::Vector3  rkP0, ::UnityEngine::Vector3  rkP1, ::UnityEngine::Vector3  rkP2) ;

/// @brief Method ExactSphere4, addr 0xadd3948, size 0x6ec, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* ExactSphere4(::UnityEngine::Vector3  rkP0, ::UnityEngine::Vector3  rkP1, ::UnityEngine::Vector3  rkP2, ::UnityEngine::Vector3  rkP3) ;

/// @brief Method MinSphere, addr 0xadc86cc, size 0x1dc, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* MinSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inputPoints) ;

static inline ::Technie::PhysicsCreator::SphereUtils* New_ctor() ;

/// @brief Method PointInsideSphere, addr 0xadd35b0, size 0x4c, virtual false, abstract: false, final false
static inline bool PointInsideSphere(::UnityEngine::Vector3  rkP, ::Technie::PhysicsCreator::Sphere*  rkS) ;

/// @brief Method Shuffle, addr 0xadd5a98, size 0x11c, virtual false, abstract: false, final false
static inline void Shuffle(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  list) ;

/// @brief Method Update, addr 0xadd59c4, size 0x70, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* Update(int32_t  funcIndex, int32_t  numPoints, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::Technie::PhysicsCreator::SphereUtils_Support*  support) ;

/// @brief Method UpdateSupport1, addr 0xadd4034, size 0xe8, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* UpdateSupport1(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp) ;

/// @brief Method UpdateSupport2, addr 0xadd411c, size 0x30c, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* UpdateSupport2(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp) ;

/// @brief Method UpdateSupport3, addr 0xadd4428, size 0x734, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* UpdateSupport3(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp) ;

/// @brief Method UpdateSupport4, addr 0xadd4b5c, size 0xe68, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Sphere* UpdateSupport4(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp) ;

/// @brief Method .ctor, addr 0xadd5cc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereUtils(SphereUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereUtils(SphereUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30521};

/// @brief Field kEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kEpsilon{static_cast<float_t>(0.001f)};

/// @brief Field kOnePlusEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kOnePlusEpsilon{static_cast<float_t>(1.001f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::SphereUtils) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.SphereUtils/Support
class CORDL_TYPE SphereUtils_Support : public ::System::Object {
public:
// Declarations
/// @brief Field m_aiIndex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aiIndex, put=__cordl_internal_set_m_aiIndex)) ::ArrayW<int32_t>  m_aiIndex;

/// @brief Field m_iQuantity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_iQuantity, put=__cordl_internal_set_m_iQuantity)) int32_t  m_iQuantity;

/// @brief Method Contains, addr 0xadd5bb4, size 0x10c, virtual false, abstract: false, final false
inline bool Contains(int32_t  iIndex, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points) ;

static inline ::Technie::PhysicsCreator::SphereUtils_Support* New_ctor() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_aiIndex() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_aiIndex() ;

constexpr int32_t const& __cordl_internal_get_m_iQuantity() const;

constexpr int32_t& __cordl_internal_get_m_iQuantity() ;

constexpr void __cordl_internal_set_m_aiIndex(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_iQuantity(int32_t  value) ;

/// @brief Method .ctor, addr 0xadd5a34, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereUtils_Support() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereUtils_Support", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereUtils_Support(SphereUtils_Support && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereUtils_Support", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereUtils_Support(SphereUtils_Support const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30520};

/// @brief Field m_iQuantity, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_iQuantity;

/// @brief Field m_aiIndex, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_aiIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::SphereUtils_Support, ___m_iQuantity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::SphereUtils_Support, ___m_aiIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::SphereUtils_Support) == 0x20, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
