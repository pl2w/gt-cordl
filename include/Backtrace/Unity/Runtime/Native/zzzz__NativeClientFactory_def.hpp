#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/NativeClientFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NativeClientFactory)
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model {
class BacktraceConfiguration;
}
namespace Backtrace::Unity::Runtime::Native {
class INativeClient;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Runtime::Native {
class NativeClientFactory;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Runtime::Native::NativeClientFactory*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Runtime::Native::NativeClientFactory*, "Backtrace.Unity.Runtime.Native", "NativeClientFactory");
// Dependencies System.Object
namespace Backtrace::Unity::Runtime::Native {
// Is value type: false
// CS Name: Backtrace.Unity.Runtime.Native.NativeClientFactory
class CORDL_TYPE NativeClientFactory : public ::System::Object {
public:
// Declarations
/// @brief Method CreateNativeClient, addr 0x5efe8a4, size 0x15c, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Runtime::Native::INativeClient* CreateNativeClient(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::StringW  gameObjectName, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes, ::System::Collections::Generic::ICollection_1<::StringW>*  attachments) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeClientFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeClientFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeClientFactory(NativeClientFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeClientFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeClientFactory(NativeClientFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27584};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Runtime::Native::NativeClientFactory) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Runtime::Native
