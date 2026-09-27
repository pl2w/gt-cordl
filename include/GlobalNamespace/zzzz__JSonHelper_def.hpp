#pragma once
// IWYU pragma private; include "GlobalNamespace/JSonHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JSonHelper)
namespace GlobalNamespace {
template<typename T>
class JSonHelper_Wrapper_1;
}
// Forward declare root types
namespace GlobalNamespace {
class JSonHelper;
}
namespace GlobalNamespace {
template<typename T>
class JSonHelper_Wrapper_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JSonHelper*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::JSonHelper_Wrapper_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JSonHelper*, "", "JSonHelper");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::JSonHelper_Wrapper_1, "", "JSonHelper/Wrapper`1");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: JSonHelper
class CORDL_TYPE JSonHelper : public ::System::Object {
public:
// Declarations
template<typename T>
using Wrapper_1 = ::GlobalNamespace::JSonHelper_Wrapper_1<T>;

/// @brief Method FromJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> FromJson(::StringW  json) ;

/// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToJson(::ArrayW<T>  array) ;

/// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToJson(::ArrayW<T>  array, bool  prettyPrint) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSonHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSonHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JSonHelper(JSonHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSonHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSonHelper(JSonHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::JSonHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: JSonHelper/Wrapper`1<T>
class CORDL_TYPE JSonHelper_Wrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::ArrayW<T>  Items;

static inline ::GlobalNamespace::JSonHelper_Wrapper_1<T>* New_ctor() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_Items() const;

constexpr ::ArrayW<T>& __cordl_internal_get_Items() ;

constexpr void __cordl_internal_set_Items(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSonHelper_Wrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSonHelper_Wrapper_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JSonHelper_Wrapper_1(JSonHelper_Wrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSonHelper_Wrapper_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSonHelper_Wrapper_1(JSonHelper_Wrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1289};

/// @brief Field Items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
