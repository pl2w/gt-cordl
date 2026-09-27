#pragma once
// IWYU pragma private; include "System/ParameterizedStrings_FormatParam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterizedStrings_FormatParam)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParameterizedStrings_FormatParam;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParameterizedStrings_FormatParam);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParameterizedStrings_FormatParam, "System", "ParameterizedStrings/FormatParam");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.ParameterizedStrings/FormatParam
struct CORDL_TYPE ParameterizedStrings_FormatParam {
public:
// Declarations
 __declspec(property(get=get_Int32)) int32_t  Int32;

 __declspec(property(get=get_Object)) ::System::Object*  Object;

 __declspec(property(get=get_String)) ::StringW  String;

/// @brief Method .ctor, addr 0xa337b08, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  intValue, ::StringW  stringValue) ;

/// @brief Method .ctor, addr 0xa337af8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method get_Int32, addr 0xa337b18, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Int32() ;

/// @brief Method get_Object, addr 0xa337428, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* get_Object() ;

/// @brief Method get_String, addr 0xa337404, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_String() ;

/// @brief Method op_Implicit, addr 0xa3345e0, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParameterizedStrings_FormatParam op_Implicit___GlobalNamespace__ParameterizedStrings_FormatParam(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParameterizedStrings_FormatParam() ;

// Ctor Parameters [CppParam { name: "_int32", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_string", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ParameterizedStrings_FormatParam(int32_t  _int32, ::StringW  _string) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _int32, offset: 0x0, size: 0x4, def value: None
 int32_t  _int32;

/// @brief Field _string, offset: 0x8, size: 0x8, def value: None
 ::StringW  _string;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParameterizedStrings_FormatParam, _int32) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParameterizedStrings_FormatParam, _string) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParameterizedStrings_FormatParam) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
