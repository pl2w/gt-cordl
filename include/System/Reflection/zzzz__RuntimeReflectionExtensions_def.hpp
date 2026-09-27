#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeReflectionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RuntimeReflectionExtensions)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeReflectionExtensions;
}
// Write type traits
MARK_REF_T(::System::Reflection::RuntimeReflectionExtensions*);
DEFINE_IL2CPP_CLASS(::System::Reflection::RuntimeReflectionExtensions*, "System.Reflection", "RuntimeReflectionExtensions");
// [Extension]
// Dependencies System.Object
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimeReflectionExtensions
class CORDL_TYPE RuntimeReflectionExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetRuntimeEvents, addr 0xa1fb870, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::EventInfo*>* GetRuntimeEvents(::System::Type*  type) ;

/// [Extension]
/// @brief Method GetRuntimeField, addr 0xa1fb914, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Reflection::FieldInfo* GetRuntimeField(::System::Type*  type, ::StringW  name) ;

/// [Extension]
/// @brief Method GetRuntimeFields, addr 0xa1fb684, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetRuntimeFields(::System::Type*  type) ;

/// [Extension]
/// @brief Method GetRuntimeMethods, addr 0xa1fb728, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetRuntimeMethods(::System::Type*  type) ;

/// [Extension]
/// @brief Method GetRuntimeProperties, addr 0xa1fb7cc, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetRuntimeProperties(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeReflectionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeReflectionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeReflectionExtensions(RuntimeReflectionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeReflectionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeReflectionExtensions(RuntimeReflectionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6653};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::RuntimeReflectionExtensions) == 0x10, "Size mismatch!");

} // namespace end def System::Reflection
