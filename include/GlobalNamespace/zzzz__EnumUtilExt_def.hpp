#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumUtilExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumUtilExt)
// Forward declare root types
namespace GlobalNamespace {
class EnumUtilExt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnumUtilExt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnumUtilExt*, "", "EnumUtilExt");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnumUtilExt
class CORDL_TYPE EnumUtilExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline int32_t GetIndex(TEnum  e) ;

/// [Extension]
/// @brief Method GetLongValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline int64_t GetLongValue(TEnum  e) ;

/// [Extension]
/// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::StringW GetName(TEnum  e) ;

/// [Extension]
/// @brief Method GetNextValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline TEnum GetNextValue(TEnum  e) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumUtilExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumUtilExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumUtilExt(EnumUtilExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtilExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumUtilExt(EnumUtilExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EnumUtilExt) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
