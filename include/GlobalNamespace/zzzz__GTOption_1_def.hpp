#pragma once
// IWYU pragma private; include "GlobalNamespace/GTOption_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GTOption_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct GTOption_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::GTOption_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::GTOption_1, "", "GTOption`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: GTOption`1<T>
struct CORDL_TYPE GTOption_1 {
public:
// Declarations
 __declspec(property(get=get_ResolvedValue)) T  ResolvedValue;

/// @brief Method ResetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResetValue() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  defaultValue) ;

/// @brief Method get_ResolvedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_ResolvedValue() ;

// Ctor Parameters []
// @brief default ctor
constexpr GTOption_1() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultValue", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr GTOption_1(bool  enabled, T  value, T  defaultValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{846};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Tooltip("When checked, the filter is applied; when unchecked (default), it is ignored.")]
/// [SerializeField]
/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// [SerializeField]
/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 T  value;

/// @brief Field defaultValue, offset: 0x10, size: 0x8, def value: None
 T  defaultValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
