#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/MethodImplAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__MethodImplOptions_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MethodImplAttribute)
namespace System::Runtime::CompilerServices {
struct MethodImplOptions;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class MethodImplAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::CompilerServices::MethodImplAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::MethodImplAttribute*, "System.Runtime.CompilerServices", "MethodImplAttribute");
// [ComVisible(true)]
// [AttributeUsage((System.AttributeTargets)96, Inherited = false)]
// Dependencies System.Attribute, System.Runtime.CompilerServices.MethodImplOptions
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.MethodImplAttribute
class CORDL_TYPE MethodImplAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field _val, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__val, put=__cordl_internal_set__val)) ::System::Runtime::CompilerServices::MethodImplOptions  _val;

static inline ::System::Runtime::CompilerServices::MethodImplAttribute* New_ctor() ;

static inline ::System::Runtime::CompilerServices::MethodImplAttribute* New_ctor(::System::Runtime::CompilerServices::MethodImplOptions  methodImplOptions) ;

constexpr ::System::Runtime::CompilerServices::MethodImplOptions const& __cordl_internal_get__val() const;

constexpr ::System::Runtime::CompilerServices::MethodImplOptions& __cordl_internal_get__val() ;

constexpr void __cordl_internal_set__val(::System::Runtime::CompilerServices::MethodImplOptions  value) ;

/// @brief Method .ctor, addr 0xa1e84d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa1e84a8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::CompilerServices::MethodImplOptions  methodImplOptions) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MethodImplAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MethodImplAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodImplAttribute(MethodImplAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodImplAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodImplAttribute(MethodImplAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6555};

/// @brief Field _val, offset: 0x10, size: 0x4, def value: None
 ::System::Runtime::CompilerServices::MethodImplOptions  ____val;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::MethodImplAttribute, ____val) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::CompilerServices::MethodImplAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
