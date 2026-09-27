#pragma once
// IWYU pragma private; include "GlobalNamespace/IGRSleepableEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IGRSleepableEntity)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IGRSleepableEntity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGRSleepableEntity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGRSleepableEntity*, "", "IGRSleepableEntity");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGRSleepableEntity
class CORDL_TYPE IGRSleepableEntity {
public:
// Declarations
 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_WakeUpRadius)) float_t  WakeUpRadius;

/// @brief Method IsSleeping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsSleeping() ;

/// @brief Method Sleep, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Sleep() ;

/// @brief Method WakeUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WakeUp() ;

/// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_WakeUpRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_WakeUpRadius() ;

// Ctor Parameters [CppParam { name: "", ty: "IGRSleepableEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGRSleepableEntity(IGRSleepableEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2114};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
