#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ChangeDetector_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviour_ChangeDetector_Enumerator)
// Forward declare root types
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator, "Fusion", "NetworkBehaviour/ChangeDetector/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/Enumerator
struct CORDL_TYPE ChangeDetector_NetworkBehaviour_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::StringW  Current;

/// @brief Method MoveNext, addr 0x5f82748, size 0x1c, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x5f8273c, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0x5f82668, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  changed, int32_t  count) ;

/// @brief Method get_Current, addr 0x5f82708, size 0x34, virtual false, abstract: false, final false
inline ::StringW get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_Enumerator() ;

// Ctor Parameters [CppParam { name: "_changed", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChangeDetector_NetworkBehaviour_Enumerator(::ArrayW<::StringW>  _changed, int32_t  _count, int32_t  _current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _changed, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::StringW>  _changed;

/// @brief Field _count, offset: 0x8, size: 0x4, def value: None
 int32_t  _count;

/// @brief Field _current, offset: 0xc, size: 0x4, def value: None
 int32_t  _current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator, _changed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator, _count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator, _current) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
