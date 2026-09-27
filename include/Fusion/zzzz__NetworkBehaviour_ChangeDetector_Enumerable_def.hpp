#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ChangeDetector_Enumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviour_ChangeDetector_Enumerable)
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_Enumerator;
}
// Forward declare root types
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_Enumerable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable, "Fusion", "NetworkBehaviour/ChangeDetector/Enumerable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/Enumerable
struct CORDL_TYPE ChangeDetector_NetworkBehaviour_Enumerable {
public:
// Declarations
/// @brief Method Changed, addr 0x5f82694, size 0x74, virtual false, abstract: false, final false
inline bool Changed(::StringW  name) ;

/// @brief Method GetEnumerator, addr 0x5f82634, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator GetEnumerator() ;

/// @brief Method .ctor, addr 0x5f82214, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  changed, int32_t  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_Enumerable() ;

// Ctor Parameters [CppParam { name: "_changed", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChangeDetector_NetworkBehaviour_Enumerable(::ArrayW<::StringW>  _changed, int32_t  _count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _changed, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::StringW>  _changed;

/// @brief Field _count, offset: 0x8, size: 0x4, def value: None
 int32_t  _count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable, _changed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable, _count) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
