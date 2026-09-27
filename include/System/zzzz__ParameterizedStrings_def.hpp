#pragma once
// IWYU pragma private; include "System/ParameterizedStrings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParameterizedStrings_FormatParam_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterizedStrings)
namespace GlobalNamespace {
struct ParameterizedStrings_FormatParam;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class ParameterizedStrings_LowLevelStack;
}
// Forward declare root types
namespace System {
class ParameterizedStrings;
}
namespace System {
class ParameterizedStrings_LowLevelStack;
}
// Write type traits
MARK_REF_T(::System::ParameterizedStrings*);
MARK_REF_T(::System::ParameterizedStrings_LowLevelStack*);
DEFINE_IL2CPP_CLASS(::System::ParameterizedStrings*, "System", "ParameterizedStrings");
DEFINE_IL2CPP_CLASS(::System::ParameterizedStrings_LowLevelStack*, "System", "ParameterizedStrings/LowLevelStack");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ParameterizedStrings
class CORDL_TYPE ParameterizedStrings : public ::System::Object {
public:
// Declarations
using FormatParam = ::GlobalNamespace::ParameterizedStrings_FormatParam;

using LowLevelStack = ::System::ParameterizedStrings_LowLevelStack;

/// @brief Field _cachedStack, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedStack, put=setStaticF__cachedStack)) ::System::ParameterizedStrings_LowLevelStack*  _cachedStack;

/// @brief Method AsBool, addr 0xa337874, size 0xc, virtual false, abstract: false, final false
static inline bool AsBool(int32_t  i) ;

/// @brief Method AsInt, addr 0xa33786c, size 0x8, virtual false, abstract: false, final false
static inline int32_t AsInt(bool  b) ;

/// @brief Method Evaluate, addr 0xa334610, size 0x164, virtual false, abstract: false, final false
static inline ::StringW Evaluate(::StringW  format, /* [ParamArray] */ ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  args) ;

/// @brief Method EvaluateInternal, addr 0xa336a98, size 0x8e0, virtual false, abstract: false, final false
static inline ::StringW EvaluateInternal(::StringW  format, ::by_ref<int32_t>  pos, ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  args, ::System::ParameterizedStrings_LowLevelStack*  stack, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  dynamicVars, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  staticVars) ;

/// @brief Method FormatPrintF, addr 0xa337460, size 0x200, virtual false, abstract: false, final false
static inline ::StringW FormatPrintF(::StringW  format, ::System::Object*  arg) ;

/// @brief Method GetDynamicOrStaticVariables, addr 0xa337750, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam> GetDynamicOrStaticVariables(char16_t  c, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  dynamicVars, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  staticVars, ::by_ref<int32_t>  index) ;

/// @brief Method StringFromAsciiBytes, addr 0xa337880, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW StringFromAsciiBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

static inline ::System::ParameterizedStrings_LowLevelStack* getStaticF__cachedStack() ;

static inline void setStaticF__cachedStack(::System::ParameterizedStrings_LowLevelStack*  value) ;

/// @brief Method snprintf, addr 0xa337974, size 0xcc, virtual false, abstract: false, final false
static inline int32_t snprintf(uint8_t*  str, ::System::IntPtr  size, ::StringW  format, ::StringW  arg1) ;

/// @brief Method snprintf, addr 0xa337a40, size 0xb8, virtual false, abstract: false, final false
static inline int32_t snprintf(uint8_t*  str, ::System::IntPtr  size, ::StringW  format, int32_t  arg1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterizedStrings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterizedStrings(ParameterizedStrings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterizedStrings(ParameterizedStrings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5746};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ParameterizedStrings) == 0x10, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object, System.ParameterizedStrings::FormatParam
namespace System {
// Is value type: false
// CS Name: System.ParameterizedStrings/LowLevelStack
class CORDL_TYPE ParameterizedStrings_LowLevelStack : public ::System::Object {
public:
// Declarations
/// @brief Field _arr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__arr, put=__cordl_internal_set__arr)) ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  _arr;

/// @brief Field _count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Method Clear, addr 0xa336a70, size 0x28, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::System::ParameterizedStrings_LowLevelStack* New_ctor() ;

/// @brief Method Pop, addr 0xa337378, size 0x8c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParameterizedStrings_FormatParam Pop() ;

/// @brief Method Push, addr 0xa337660, size 0xf0, virtual false, abstract: false, final false
inline void Push(::GlobalNamespace::ParameterizedStrings_FormatParam  item) ;

constexpr ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam> const& __cordl_internal_get__arr() const;

constexpr ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>& __cordl_internal_get__arr() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr void __cordl_internal_set__arr(::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

/// @brief Method .ctor, addr 0xa336a18, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterizedStrings_LowLevelStack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings_LowLevelStack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterizedStrings_LowLevelStack(ParameterizedStrings_LowLevelStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings_LowLevelStack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterizedStrings_LowLevelStack(ParameterizedStrings_LowLevelStack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5745};

/// @brief Field _arr, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  ____arr;

/// @brief Field _count, offset: 0x18, size: 0x4, def value: None
 int32_t  ____count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ParameterizedStrings_LowLevelStack, ____arr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ParameterizedStrings_LowLevelStack, ____count) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ParameterizedStrings_LowLevelStack) == 0x20, "Size mismatch!");

} // namespace end def System
