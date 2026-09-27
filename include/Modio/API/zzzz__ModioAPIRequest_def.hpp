#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPIRequestContentType_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestMethod_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioAPIRequest)
namespace Modio::API {
struct ModioAPIRequestContentType;
}
namespace Modio::API {
struct ModioAPIRequestMethod;
}
namespace Modio::API {
class ModioAPIRequestOptions;
}
namespace Modio::API {
class ModioAPIRequest___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Modio::API {
class ModioAPIRequest;
}
namespace Modio::API {
class ModioAPIRequest___c;
}
// Write type traits
MARK_REF_T(::Modio::API::ModioAPIRequest*);
MARK_REF_T(::Modio::API::ModioAPIRequest___c*);
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPIRequest*, "Modio.API", "ModioAPIRequest");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPIRequest___c*, "Modio.API", "ModioAPIRequest/<>c");
// Dependencies Modio.API.ModioAPIRequestContentType, Modio.API.ModioAPIRequestMethod, System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPIRequest
class CORDL_TYPE ModioAPIRequest : public ::System::Object {
public:
// Declarations
using __c = ::Modio::API::ModioAPIRequest___c;

 __declspec(property(get=get_ContentType, put=set_ContentType)) ::Modio::API::ModioAPIRequestContentType  ContentType;

 __declspec(property(get=get_ContentTypeHint, put=set_ContentTypeHint)) ::StringW  ContentTypeHint;

 __declspec(property(get=get_Method, put=set_Method)) ::Modio::API::ModioAPIRequestMethod  Method;

 __declspec(property(get=get_Options)) ::Modio::API::ModioAPIRequestOptions*  Options;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>*  Pool;

 __declspec(property(get=get_Uri, put=set_Uri)) ::StringW  Uri;

/// @brief Field <ContentTypeHint>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ContentTypeHint_k__BackingField, put=__cordl_internal_set__ContentTypeHint_k__BackingField)) ::StringW  _ContentTypeHint_k__BackingField;

/// @brief Field <ContentType>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__ContentType_k__BackingField, put=__cordl_internal_set__ContentType_k__BackingField)) ::Modio::API::ModioAPIRequestContentType  _ContentType_k__BackingField;

/// @brief Field <Method>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Method_k__BackingField, put=__cordl_internal_set__Method_k__BackingField)) ::Modio::API::ModioAPIRequestMethod  _Method_k__BackingField;

/// @brief Field <Options>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) ::Modio::API::ModioAPIRequestOptions*  _Options_k__BackingField;

/// @brief Field <Uri>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Uri_k__BackingField, put=__cordl_internal_set__Uri_k__BackingField)) ::StringW  _Uri_k__BackingField;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9fdd9c8, size 0x1a8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetUri, addr 0x9fdd720, size 0x2a8, virtual false, abstract: false, final false
inline ::StringW GetUri(::System::Collections::Generic::List_1<::StringW>*  defaultParameters) ;

/// @brief Method New, addr 0x9fdd4d8, size 0x248, virtual false, abstract: false, final false
static inline ::Modio::API::ModioAPIRequest* New(::StringW  uri, ::Modio::API::ModioAPIRequestMethod  method, ::Modio::API::ModioAPIRequestContentType  contentType, ::StringW  contentTypeHint) ;

static inline ::Modio::API::ModioAPIRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__ContentTypeHint_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ContentTypeHint_k__BackingField() ;

constexpr ::Modio::API::ModioAPIRequestContentType const& __cordl_internal_get__ContentType_k__BackingField() const;

constexpr ::Modio::API::ModioAPIRequestContentType& __cordl_internal_get__ContentType_k__BackingField() ;

constexpr ::Modio::API::ModioAPIRequestMethod const& __cordl_internal_get__Method_k__BackingField() const;

constexpr ::Modio::API::ModioAPIRequestMethod& __cordl_internal_get__Method_k__BackingField() ;

constexpr ::Modio::API::ModioAPIRequestOptions* const& __cordl_internal_get__Options_k__BackingField() const;

constexpr ::Modio::API::ModioAPIRequestOptions*& __cordl_internal_get__Options_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Uri_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Uri_k__BackingField() ;

constexpr void __cordl_internal_set__ContentTypeHint_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ContentType_k__BackingField(::Modio::API::ModioAPIRequestContentType  value) ;

constexpr void __cordl_internal_set__Method_k__BackingField(::Modio::API::ModioAPIRequestMethod  value) ;

constexpr void __cordl_internal_set__Options_k__BackingField(::Modio::API::ModioAPIRequestOptions*  value) ;

constexpr void __cordl_internal_set__Uri_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fdd2d8, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>* getStaticF_Pool() ;

/// [CompilerGenerated]
/// @brief Method get_ContentType, addr 0x9fdd4b8, size 0x8, virtual false, abstract: false, final false
inline ::Modio::API::ModioAPIRequestContentType get_ContentType() ;

/// [CompilerGenerated]
/// @brief Method get_ContentTypeHint, addr 0x9fdd4c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ContentTypeHint() ;

/// [CompilerGenerated]
/// @brief Method get_Method, addr 0x9fdd4a8, size 0x8, virtual false, abstract: false, final false
inline ::Modio::API::ModioAPIRequestMethod get_Method() ;

/// [CompilerGenerated]
/// @brief Method get_Options, addr 0x9fdd4a0, size 0x8, virtual false, abstract: false, final false
inline ::Modio::API::ModioAPIRequestOptions* get_Options() ;

/// [CompilerGenerated]
/// @brief Method get_Uri, addr 0x9fdd490, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Uri() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Pool(::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ContentType, addr 0x9fdd4c0, size 0x8, virtual false, abstract: false, final false
inline void set_ContentType(::Modio::API::ModioAPIRequestContentType  value) ;

/// [CompilerGenerated]
/// @brief Method set_ContentTypeHint, addr 0x9fdd4d0, size 0x8, virtual false, abstract: false, final false
inline void set_ContentTypeHint(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Method, addr 0x9fdd4b0, size 0x8, virtual false, abstract: false, final false
inline void set_Method(::Modio::API::ModioAPIRequestMethod  value) ;

/// [CompilerGenerated]
/// @brief Method set_Uri, addr 0x9fdd498, size 0x8, virtual false, abstract: false, final false
inline void set_Uri(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIRequest(ModioAPIRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIRequest(ModioAPIRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18024};

/// [CompilerGenerated]
/// @brief Field <Uri>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Uri_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Options>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Modio::API::ModioAPIRequestOptions*  ____Options_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Method>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Modio::API::ModioAPIRequestMethod  ____Method_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ContentType>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::Modio::API::ModioAPIRequestContentType  ____ContentType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ContentTypeHint>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____ContentTypeHint_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::ModioAPIRequest, ____Uri_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequest, ____Options_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequest, ____Method_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequest, ____ContentType_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequest, ____ContentTypeHint_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::ModioAPIRequest) == 0x30, "Size mismatch!");

} // namespace end def Modio::API
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPIRequest/<>c
class CORDL_TYPE ModioAPIRequest___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::API::ModioAPIRequest___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  __9__22_0;

static inline ::Modio::API::ModioAPIRequest___c* New_ctor() ;

/// @brief Method <GetUri>b__22_0, addr 0x9fddd10, size 0x74, virtual false, abstract: false, final false
inline ::StringW _GetUri_b__22_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  key) ;

/// @brief Method .ctor, addr 0x9fddd08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::API::ModioAPIRequest___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Modio::API::ModioAPIRequest___c*  value) ;

static inline void setStaticF___9__22_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIRequest___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequest___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIRequest___c(ModioAPIRequest___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequest___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIRequest___c(ModioAPIRequest___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18023};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPIRequest___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
