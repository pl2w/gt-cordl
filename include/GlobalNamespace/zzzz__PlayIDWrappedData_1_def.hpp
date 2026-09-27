#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayIDWrappedData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnterPlayID_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlayIDWrappedData_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct PlayIDWrappedData_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::PlayIDWrappedData_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::PlayIDWrappedData_1, "", "PlayIDWrappedData`1");
// Dependencies EnterPlayID
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: PlayIDWrappedData`1<T>
struct CORDL_TYPE PlayIDWrappedData_1 {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  initialValue) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayIDWrappedData_1() ;

// Ctor Parameters [CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "initialValue", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::GlobalNamespace::EnterPlayID", modifiers: "", def_value: None, comment: None }]
constexpr PlayIDWrappedData_1(T  currentValue, T  initialValue, ::GlobalNamespace::EnterPlayID  id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3535};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field currentValue, offset: 0x0, size: 0x8, def value: None
 T  currentValue;

/// @brief Field initialValue, offset: 0x8, size: 0x8, def value: None
 T  initialValue;

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::EnterPlayID  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
