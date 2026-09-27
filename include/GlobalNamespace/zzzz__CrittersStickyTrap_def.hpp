#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersStickyTrap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersToolThrowable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersStickyTrap)
namespace GlobalNamespace {
class CrittersPawn;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersStickyTrap;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersStickyTrap*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersStickyTrap*, "", "CrittersStickyTrap");
// Dependencies CrittersToolThrowable
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersStickyTrap
class CORDL_TYPE CrittersStickyTrap : public ::GlobalNamespace::CrittersToolThrowable {
public:
// Declarations
/// @brief Field isStuck, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStuck, put=__cordl_internal_set_isStuck)) bool  isStuck;

/// @brief Field stickOnImpact, offset 0x1a8, size 0x1 
 __declspec(property(get=__cordl_internal_get_stickOnImpact, put=__cordl_internal_set_stickOnImpact)) bool  stickOnImpact;

/// @brief Field subStickyGooIndex, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_subStickyGooIndex, put=__cordl_internal_set_subStickyGooIndex)) int32_t  subStickyGooIndex;

/// @brief Method AddActorDataToList, addr 0x56f4e20, size 0xf0, virtual true, abstract: false, final false
inline int32_t AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method Initialize, addr 0x56f47ac, size 0x48, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CrittersStickyTrap* New_ctor() ;

/// @brief Method OnDisable, addr 0x56f4820, size 0x1c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnImpact, addr 0x56f491c, size 0x348, virtual true, abstract: false, final false
inline void OnImpact(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal) ;

/// @brief Method OnImpactCritter, addr 0x56f4c64, size 0x98, virtual true, abstract: false, final false
inline void OnImpactCritter(::GlobalNamespace::CrittersPawn*  impactedCritter) ;

/// @brief Method OnPickedUp, addr 0x56f4cfc, size 0x18, virtual true, abstract: false, final false
inline void OnPickedUp() ;

/// @brief Method SendDataByCrittersActorType, addr 0x56f4d14, size 0x58, virtual true, abstract: false, final false
inline void SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SetImpulse, addr 0x56f483c, size 0xe0, virtual true, abstract: false, final false
inline void SetImpulse() ;

/// @brief Method TotalActorDataLength, addr 0x56f4f10, size 0x18, virtual true, abstract: false, final false
inline int32_t TotalActorDataLength() ;

/// @brief Method UpdateFromRPC, addr 0x56f4f28, size 0xd4, virtual true, abstract: false, final false
inline int32_t UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateSpecificActor, addr 0x56f4d6c, size 0xb4, virtual true, abstract: false, final false
inline bool UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream) ;

constexpr bool const& __cordl_internal_get_isStuck() const;

constexpr bool& __cordl_internal_get_isStuck() ;

constexpr bool const& __cordl_internal_get_stickOnImpact() const;

constexpr bool& __cordl_internal_get_stickOnImpact() ;

constexpr int32_t const& __cordl_internal_get_subStickyGooIndex() const;

constexpr int32_t& __cordl_internal_get_subStickyGooIndex() ;

constexpr void __cordl_internal_set_isStuck(bool  value) ;

constexpr void __cordl_internal_set_stickOnImpact(bool  value) ;

constexpr void __cordl_internal_set_subStickyGooIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x56f4ffc, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersStickyTrap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersStickyTrap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersStickyTrap(CrittersStickyTrap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersStickyTrap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersStickyTrap(CrittersStickyTrap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{123};

/// [Header("Sticky Trap")]
/// @brief Field stickOnImpact, offset: 0x1a8, size: 0x1, def value: None
 bool  ___stickOnImpact;

/// @brief Field subStickyGooIndex, offset: 0x1ac, size: 0x4, def value: None
 int32_t  ___subStickyGooIndex;

/// @brief Field isStuck, offset: 0x1b0, size: 0x1, def value: None
 bool  ___isStuck;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersStickyTrap, ___stickOnImpact) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersStickyTrap, ___subStickyGooIndex) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersStickyTrap, ___isStuck) == 0x1b0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersStickyTrap) == 0x1b8, "Size mismatch!");

} // namespace end def GlobalNamespace
