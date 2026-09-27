#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/WebHeaderCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebHeaderCollection)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Specialized {
class NameObjectCollectionBase_KeysCollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace WebSocketSharp::Net {
class HttpHeaderInfo;
}
namespace WebSocketSharp::Net {
struct HttpHeaderType;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class WebHeaderCollection;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::WebHeaderCollection*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::WebHeaderCollection*, "WebSocketSharp.Net", "WebHeaderCollection");
// [DefaultMember("Item")]
// [ComVisible(true)]
// Dependencies System.Collections.Specialized.NameValueCollection, WebSocketSharp.Net.HttpHeaderType
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.WebHeaderCollection
class CORDL_TYPE WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection {
public:
// Declarations
 __declspec(property(get=get_AllKeys)) ::ArrayW<::StringW>  AllKeys;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Keys)) ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*  Keys;

/// @brief Field _headers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__headers, put=setStaticF__headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>*  _headers;

/// @brief Field _internallyUsed, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__internallyUsed, put=__cordl_internal_set__internallyUsed)) bool  _internallyUsed;

/// @brief Field _state, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::WebSocketSharp::Net::HttpHeaderType  _state;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Add, addr 0xb988c84, size 0xf4, virtual true, abstract: false, final false
inline void Add(::StringW  name, ::StringW  value) ;

/// @brief Method Clear, addr 0xb988d78, size 0x1c, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Get, addr 0xb988d94, size 0x8, virtual true, abstract: false, final false
inline ::StringW Get(int32_t  index) ;

/// @brief Method Get, addr 0xb988d9c, size 0x8, virtual true, abstract: false, final false
inline ::StringW Get(::StringW  name) ;

/// @brief Method GetEnumerator, addr 0xb988da4, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetKey, addr 0xb988dac, size 0x8, virtual true, abstract: false, final false
inline ::StringW GetKey(int32_t  index) ;

/// @brief Method GetObjectData, addr 0xb988dfc, size 0x1bc, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetValues, addr 0xb988db4, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> GetValues(int32_t  index) ;

/// @brief Method GetValues, addr 0xb988dd8, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> GetValues(::StringW  name) ;

/// @brief Method InternalSet, addr 0xb983b88, size 0x1b4, virtual false, abstract: false, final false
inline void InternalSet(::StringW  header, bool  response) ;

static inline ::WebSocketSharp::Net::WebHeaderCollection* New_ctor() ;

static inline ::WebSocketSharp::Net::WebHeaderCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method OnDeserialization, addr 0xb988fb8, size 0x4, virtual true, abstract: false, final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Remove, addr 0xb988fbc, size 0xb0, virtual true, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method Set, addr 0xb98906c, size 0xf4, virtual true, abstract: false, final false
inline void Set(::StringW  name, ::StringW  value) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xb9892b0, size 0xc, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method ToString, addr 0xb989160, size 0x150, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__internallyUsed() const;

constexpr bool& __cordl_internal_get__internallyUsed() ;

constexpr ::WebSocketSharp::Net::HttpHeaderType const& __cordl_internal_get__state() const;

constexpr ::WebSocketSharp::Net::HttpHeaderType& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__internallyUsed(bool  value) ;

constexpr void __cordl_internal_set__state(::WebSocketSharp::Net::HttpHeaderType  value) ;

/// @brief Method .ctor, addr 0xb983b80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb98828c, size 0x2a4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method add, addr 0xb988548, size 0x34, virtual false, abstract: false, final false
inline void add(::StringW  name, ::StringW  value, ::WebSocketSharp::Net::HttpHeaderType  headerType) ;

/// @brief Method checkAllowed, addr 0xb98857c, size 0x68, virtual false, abstract: false, final false
inline void checkAllowed(::WebSocketSharp::Net::HttpHeaderType  headerType) ;

/// @brief Method checkName, addr 0xb9885e4, size 0x12c, virtual false, abstract: false, final false
static inline ::StringW checkName(::StringW  name, ::StringW  paramName) ;

/// @brief Method checkRestricted, addr 0xb988710, size 0xc4, virtual false, abstract: false, final false
inline void checkRestricted(::StringW  name, ::WebSocketSharp::Net::HttpHeaderType  headerType) ;

/// @brief Method checkValue, addr 0xb988854, size 0x128, virtual false, abstract: false, final false
static inline ::StringW checkValue(::StringW  value, ::StringW  paramName) ;

/// @brief Method getHeaderInfo, addr 0xb98897c, size 0x1c0, virtual false, abstract: false, final false
static inline ::WebSocketSharp::Net::HttpHeaderInfo* getHeaderInfo(::StringW  name) ;

/// @brief Method getHeaderType, addr 0xb988b3c, size 0x94, virtual false, abstract: false, final false
static inline ::WebSocketSharp::Net::HttpHeaderType getHeaderType(::StringW  name) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>* getStaticF__headers() ;

/// @brief Method get_AllKeys, addr 0xb988530, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_AllKeys() ;

/// @brief Method get_Count, addr 0xb988538, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Keys, addr 0xb988540, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* get_Keys() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Method isMultiValue, addr 0xb988bd0, size 0x80, virtual false, abstract: false, final false
static inline bool isMultiValue(::StringW  name, bool  response) ;

/// @brief Method isRestricted, addr 0xb9887d4, size 0x80, virtual false, abstract: false, final false
static inline bool isRestricted(::StringW  name, bool  response) ;

/// @brief Method set, addr 0xb988c50, size 0x34, virtual false, abstract: false, final false
inline void set(::StringW  name, ::StringW  value, ::WebSocketSharp::Net::HttpHeaderType  headerType) ;

static inline void setStaticF__headers(::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebHeaderCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebHeaderCollection(WebHeaderCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebHeaderCollection(WebHeaderCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30362};

/// @brief Field _internallyUsed, offset: 0x68, size: 0x1, def value: None
 bool  ____internallyUsed;

/// @brief Field _state, offset: 0x6c, size: 0x4, def value: None
 ::WebSocketSharp::Net::HttpHeaderType  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::WebHeaderCollection, ____internallyUsed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::WebHeaderCollection, ____state) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::WebHeaderCollection) == 0x70, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
