#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumUtil)
// Forward declare root types
namespace GlobalNamespace {
class EnumUtil;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnumUtil*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnumUtil*, "", "EnumUtil");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnumUtil
class CORDL_TYPE EnumUtil : public ::System::Object {
public:
// Declarations
/// @brief Method EnumToIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline int32_t EnumToIndex(TEnum  e) ;

/// @brief Method EnumToLong, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline int64_t EnumToLong(TEnum  e) ;

/// @brief Method EnumToName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::StringW EnumToName(TEnum  e) ;

/// @brief Method GetIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline int32_t GetIndex(TEnum  value) ;

/// @brief Method GetLongValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline int64_t GetLongValue(TEnum  value) ;

/// @brief Method GetLongValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::ArrayW<int64_t> GetLongValues() ;

/// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::StringW GetName(TEnum  value) ;

/// @brief Method GetNames, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::ArrayW<::StringW> GetNames() ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline TEnum GetValue(int32_t  index) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline TEnum GetValue(int64_t  longValue) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline TEnum GetValue(::StringW  name) ;

/// @brief Method GetValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::ArrayW<TEnum> GetValues() ;

/// @brief Method IndexToEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline TEnum IndexToEnum(int32_t  i) ;

/// @brief Method LongToEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline TEnum LongToEnum(int64_t  l) ;

/// @brief Method NameToEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline TEnum NameToEnum(::StringW  n) ;

/// @brief Method SplitBitmask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::ArrayW<TEnum> SplitBitmask(TEnum  bitmask) ;

/// @brief Method SplitBitmask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
static inline ::ArrayW<TEnum> SplitBitmask(int64_t  bitmaskLong) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumUtil(EnumUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumUtil(EnumUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EnumUtil) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
