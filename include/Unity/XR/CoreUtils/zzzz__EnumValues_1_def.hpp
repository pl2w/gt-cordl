#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/EnumValues_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EnumValues_1)
// Forward declare root types
namespace Unity::XR::CoreUtils {
template<typename T>
class EnumValues_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::XR::CoreUtils::EnumValues_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::XR::CoreUtils::EnumValues_1, "Unity.XR.CoreUtils", "EnumValues`1");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.XR.CoreUtils.EnumValues`1<T>
class CORDL_TYPE EnumValues_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Values, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Values, put=setStaticF_Values)) ::ArrayW<T>  Values;

static inline ::ArrayW<T> getStaticF_Values() ;

static inline void setStaticF_Values(::ArrayW<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumValues_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumValues_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumValues_1(EnumValues_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumValues_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumValues_1(EnumValues_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils
