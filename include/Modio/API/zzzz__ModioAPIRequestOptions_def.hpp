#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequestOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIRequestOptions)
namespace Modio::API {
class IApiRequest;
}
namespace Modio::API {
struct ModioAPIFileParameter;
}
namespace Modio::API {
class ModioAPIRequestOptions___c;
}
namespace Modio::API {
class SearchFilter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::API {
class ModioAPIRequestOptions;
}
namespace Modio::API {
class ModioAPIRequestOptions___c;
}
// Write type traits
MARK_REF_T(::Modio::API::ModioAPIRequestOptions*);
MARK_REF_T(::Modio::API::ModioAPIRequestOptions___c*);
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPIRequestOptions*, "Modio.API", "ModioAPIRequestOptions");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPIRequestOptions___c*, "Modio.API", "ModioAPIRequestOptions/<>c");
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPIRequestOptions
class CORDL_TYPE ModioAPIRequestOptions : public ::System::Object {
public:
// Declarations
using __c = ::Modio::API::ModioAPIRequestOptions___c;

 __declspec(property(get=get_BodyDataBytes, put=set_BodyDataBytes)) ::ArrayW<uint8_t>  BodyDataBytes;

 __declspec(property(get=get_FileParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*  FileParameters;

 __declspec(property(get=get_FormParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  FormParameters;

 __declspec(property(get=get_HeaderParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  HeaderParameters;

 __declspec(property(get=get_QueryParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  QueryParameters;

 __declspec(property(get=get_RequiresAuthentication, put=set_RequiresAuthentication)) bool  RequiresAuthentication;

/// @brief Field <BodyDataBytes>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__BodyDataBytes_k__BackingField, put=__cordl_internal_set__BodyDataBytes_k__BackingField)) ::ArrayW<uint8_t>  _BodyDataBytes_k__BackingField;

/// @brief Field <FileParameters>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__FileParameters_k__BackingField, put=__cordl_internal_set__FileParameters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*  _FileParameters_k__BackingField;

/// @brief Field <FormParameters>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FormParameters_k__BackingField, put=__cordl_internal_set__FormParameters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _FormParameters_k__BackingField;

/// @brief Field <HeaderParameters>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__HeaderParameters_k__BackingField, put=__cordl_internal_set__HeaderParameters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _HeaderParameters_k__BackingField;

/// @brief Field <QueryParameters>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryParameters_k__BackingField, put=__cordl_internal_set__QueryParameters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _QueryParameters_k__BackingField;

/// @brief Field <RequiresAuthentication>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__RequiresAuthentication_k__BackingField, put=__cordl_internal_set__RequiresAuthentication_k__BackingField)) bool  _RequiresAuthentication_k__BackingField;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddBody, addr 0x9fde4ac, size 0x8, virtual false, abstract: false, final false
inline void AddBody(::ArrayW<uint8_t>  data) ;

/// @brief Method AddBody, addr 0x9fde4b4, size 0x404, virtual false, abstract: false, final false
inline void AddBody(::Modio::API::IApiRequest*  request) ;

/// @brief Method AddBody, addr 0x9fde8b8, size 0x22c, virtual false, abstract: false, final false
inline void AddBody(::Modio::API::IApiRequest*  request, ::StringW  hint) ;

/// @brief Method AddFilterParameters, addr 0x9fde2d4, size 0x1cc, virtual false, abstract: false, final false
inline void AddFilterParameters(::Modio::API::SearchFilter*  filter) ;

/// @brief Method AddHeaderParameter, addr 0x9fde24c, size 0x88, virtual false, abstract: false, final false
inline void AddHeaderParameter(::StringW  key, ::System::Object*  value) ;

/// @brief Method AddQueryParameter, addr 0x9fdddc4, size 0x88, virtual false, abstract: false, final false
inline void AddQueryParameter(::StringW  key, ::System::Object*  value) ;

/// @brief Method Dispose, addr 0x9fddb70, size 0x98, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Modio::API::ModioAPIRequestOptions* New_ctor() ;

/// @brief Method ParameterToString, addr 0x9fdde4c, size 0x400, virtual false, abstract: false, final false
static inline ::StringW ParameterToString(::System::Object*  value) ;

/// @brief Method RequireAuthentication, addr 0x9fde4a0, size 0xc, virtual false, abstract: false, final false
inline void RequireAuthentication() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__BodyDataBytes_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__BodyDataBytes_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>* const& __cordl_internal_get__FileParameters_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*& __cordl_internal_get__FileParameters_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__FormParameters_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__FormParameters_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__HeaderParameters_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__HeaderParameters_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__QueryParameters_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__QueryParameters_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RequiresAuthentication_k__BackingField() const;

constexpr bool& __cordl_internal_get__RequiresAuthentication_k__BackingField() ;

constexpr void __cordl_internal_set__BodyDataBytes_k__BackingField(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__FileParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*  value) ;

constexpr void __cordl_internal_set__FormParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__HeaderParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__QueryParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__RequiresAuthentication_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x9fdd36c, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_BodyDataBytes, addr 0x9fdddb4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_BodyDataBytes() ;

/// [CompilerGenerated]
/// @brief Method get_FileParameters, addr 0x9fdddac, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>* get_FileParameters() ;

/// [CompilerGenerated]
/// @brief Method get_FormParameters, addr 0x9fddda4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_FormParameters() ;

/// [CompilerGenerated]
/// @brief Method get_HeaderParameters, addr 0x9fddd8c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_HeaderParameters() ;

/// [CompilerGenerated]
/// @brief Method get_QueryParameters, addr 0x9fddd84, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_QueryParameters() ;

/// [CompilerGenerated]
/// @brief Method get_RequiresAuthentication, addr 0x9fddd94, size 0x8, virtual false, abstract: false, final false
inline bool get_RequiresAuthentication() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_BodyDataBytes, addr 0x9fdddbc, size 0x8, virtual false, abstract: false, final false
inline void set_BodyDataBytes(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_RequiresAuthentication, addr 0x9fddd9c, size 0x8, virtual false, abstract: false, final false
inline void set_RequiresAuthentication(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIRequestOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequestOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIRequestOptions(ModioAPIRequestOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequestOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIRequestOptions(ModioAPIRequestOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18028};

/// [CompilerGenerated]
/// @brief Field <QueryParameters>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____QueryParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HeaderParameters>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____HeaderParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RequiresAuthentication>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____RequiresAuthentication_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FormParameters>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____FormParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FileParameters>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*  ____FileParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BodyDataBytes>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____BodyDataBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::ModioAPIRequestOptions, ____QueryParameters_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequestOptions, ____HeaderParameters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequestOptions, ____RequiresAuthentication_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequestOptions, ____FormParameters_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequestOptions, ____FileParameters_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIRequestOptions, ____BodyDataBytes_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::API::ModioAPIRequestOptions) == 0x40, "Size mismatch!");

} // namespace end def Modio::API
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPIRequestOptions/<>c
class CORDL_TYPE ModioAPIRequestOptions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::API::ModioAPIRequestOptions___c*  __9;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>*  __9__28_0;

static inline ::Modio::API::ModioAPIRequestOptions___c* New_ctor() ;

/// @brief Method <AddBody>b__28_0, addr 0x9fdeb54, size 0x40, virtual false, abstract: false, final false
inline bool _AddBody_b__28_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  param) ;

/// @brief Method .ctor, addr 0x9fdeb4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::API::ModioAPIRequestOptions___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>* getStaticF___9__28_0() ;

static inline void setStaticF___9(::Modio::API::ModioAPIRequestOptions___c*  value) ;

static inline void setStaticF___9__28_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIRequestOptions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequestOptions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIRequestOptions___c(ModioAPIRequestOptions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIRequestOptions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIRequestOptions___c(ModioAPIRequestOptions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPIRequestOptions___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
