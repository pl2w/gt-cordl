#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/NativeIntegerAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(NativeIntegerAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class NativeIntegerAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::CompilerServices::NativeIntegerAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::NativeIntegerAttribute*, "System.Runtime.CompilerServices", "NativeIntegerAttribute");
// [CompilerGenerated]
// [Embedded]
// [AttributeUsage((System.AttributeTargets)27524, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.NativeIntegerAttribute
class CORDL_TYPE NativeIntegerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field TransformFlags, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformFlags, put=__cordl_internal_set_TransformFlags)) ::ArrayW<bool>  TransformFlags;

static inline ::System::Runtime::CompilerServices::NativeIntegerAttribute* New_ctor() ;

static inline ::System::Runtime::CompilerServices::NativeIntegerAttribute* New_ctor(::ArrayW<bool>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_TransformFlags() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_TransformFlags() ;

constexpr void __cordl_internal_set_TransformFlags(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x5254db4, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5254e34, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<bool>  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeIntegerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeIntegerAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeIntegerAttribute(NativeIntegerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeIntegerAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeIntegerAttribute(NativeIntegerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8766};

/// @brief Field TransformFlags, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<bool>  ___TransformFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::NativeIntegerAttribute, ___TransformFlags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::CompilerServices::NativeIntegerAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
