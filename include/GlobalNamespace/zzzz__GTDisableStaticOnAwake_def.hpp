#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDisableStaticOnAwake.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GTDisableStaticOnAwake)
// Forward declare root types
namespace GlobalNamespace {
class GTDisableStaticOnAwake;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTDisableStaticOnAwake*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDisableStaticOnAwake*, "", "GTDisableStaticOnAwake");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTDisableStaticOnAwake
class CORDL_TYPE GTDisableStaticOnAwake : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5677324, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GTDisableStaticOnAwake* New_ctor() ;

/// @brief Method .ctor, addr 0x567739c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTDisableStaticOnAwake() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTDisableStaticOnAwake", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTDisableStaticOnAwake(GTDisableStaticOnAwake && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTDisableStaticOnAwake", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTDisableStaticOnAwake(GTDisableStaticOnAwake const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{842};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTDisableStaticOnAwake) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
