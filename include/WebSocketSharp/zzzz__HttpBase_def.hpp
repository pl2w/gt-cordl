#pragma once
// IWYU pragma private; include "WebSocketSharp/HttpBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpBase)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::IO {
class Stream;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Version;
}
namespace WebSocketSharp {
class HttpBase___c__DisplayClass13_0;
}
namespace WebSocketSharp {
template<typename T>
class HttpBase___c__DisplayClass14_0_1;
}
// Forward declare root types
namespace WebSocketSharp {
class HttpBase;
}
namespace WebSocketSharp {
class HttpBase___c__DisplayClass13_0;
}
namespace WebSocketSharp {
template<typename T>
class HttpBase___c__DisplayClass14_0_1;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::HttpBase*);
MARK_REF_T(::WebSocketSharp::HttpBase___c__DisplayClass13_0*);
MARK_GEN_REF_T_PTR(::WebSocketSharp::HttpBase___c__DisplayClass14_0_1);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::HttpBase*, "WebSocketSharp", "HttpBase");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::HttpBase___c__DisplayClass13_0*, "WebSocketSharp", "HttpBase/<>c__DisplayClass13_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::WebSocketSharp::HttpBase___c__DisplayClass14_0_1, "WebSocketSharp", "HttpBase/<>c__DisplayClass14_0`1");
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.HttpBase
class CORDL_TYPE HttpBase : public ::System::Object {
public:
// Declarations
using __c__DisplayClass13_0 = ::WebSocketSharp::HttpBase___c__DisplayClass13_0;

template<typename T>
using __c__DisplayClass14_0_1 = ::WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>;

 __declspec(property(get=get_EntityBody)) ::StringW  EntityBody;

/// @brief Field EntityBodyData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityBodyData, put=__cordl_internal_set_EntityBodyData)) ::ArrayW<uint8_t>  EntityBodyData;

 __declspec(property(get=get_Headers)) ::System::Collections::Specialized::NameValueCollection*  Headers;

 __declspec(property(get=get_ProtocolVersion)) ::System::Version*  ProtocolVersion;

/// @brief Field _headers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__headers, put=__cordl_internal_set__headers)) ::System::Collections::Specialized::NameValueCollection*  _headers;

/// @brief Field _version, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) ::System::Version*  _version;

static inline ::WebSocketSharp::HttpBase* New_ctor(::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Read(::System::IO::Stream*  stream, ::System::Func_2<::ArrayW<::StringW>,T>*  parser, int32_t  millisecondsTimeout) ;

/// @brief Method ToByteArray, addr 0xb98324c, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_EntityBodyData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_EntityBodyData() ;

constexpr ::System::Collections::Specialized::NameValueCollection* const& __cordl_internal_get__headers() const;

constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get__headers() ;

constexpr ::System::Version* const& __cordl_internal_get__version() const;

constexpr ::System::Version*& __cordl_internal_get__version() ;

constexpr void __cordl_internal_set_EntityBodyData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__headers(::System::Collections::Specialized::NameValueCollection*  value) ;

constexpr void __cordl_internal_set__version(::System::Version*  value) ;

/// @brief Method .ctor, addr 0xb9827ec, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers) ;

/// @brief Method get_EntityBody, addr 0xb982830, size 0xe8, virtual false, abstract: false, final false
inline ::StringW get_EntityBody() ;

/// @brief Method get_Headers, addr 0xb979084, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Specialized::NameValueCollection* get_Headers() ;

/// @brief Method get_ProtocolVersion, addr 0xb982cf4, size 0x8, virtual false, abstract: false, final false
inline ::System::Version* get_ProtocolVersion() ;

/// @brief Method readEntityBody, addr 0xb982cfc, size 0x16c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> readEntityBody(::System::IO::Stream*  stream, ::StringW  length) ;

/// @brief Method readHeaders, addr 0xb982e68, size 0x3dc, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> readHeaders(::System::IO::Stream*  stream, int32_t  maxLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpBase(HttpBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpBase(HttpBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30354};

/// @brief Field _headers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Specialized::NameValueCollection*  ____headers;

/// @brief Field _version, offset: 0x18, size: 0x8, def value: None
 ::System::Version*  ____version;

/// @brief Field EntityBodyData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___EntityBodyData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::HttpBase, ____headers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::HttpBase, ____version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::HttpBase, ___EntityBodyData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::HttpBase) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WebSocketSharp.HttpBase/<>c__DisplayClass14_0`1<T>
class CORDL_TYPE HttpBase___c__DisplayClass14_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field stream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

/// @brief Field timeout, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) bool  timeout;

static inline ::WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>* New_ctor() ;

/// @brief Method <Read>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Read_b__0(::System::Object*  state) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr bool const& __cordl_internal_get_timeout() const;

constexpr bool& __cordl_internal_get_timeout() ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_timeout(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpBase___c__DisplayClass14_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass14_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpBase___c__DisplayClass14_0_1(HttpBase___c__DisplayClass14_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass14_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpBase___c__DisplayClass14_0_1(HttpBase___c__DisplayClass14_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30353};

/// @brief Field timeout, offset: 0x10, size: 0x1, def value: None
 bool  ___timeout;

/// @brief Field stream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.HttpBase/<>c__DisplayClass13_0
class CORDL_TYPE HttpBase___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field buff, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buff, put=__cordl_internal_set_buff)) ::System::Collections::Generic::List_1<uint8_t>*  buff;

/// @brief Field cnt, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_cnt, put=__cordl_internal_set_cnt)) int32_t  cnt;

static inline ::WebSocketSharp::HttpBase___c__DisplayClass13_0* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_buff() const;

constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_buff() ;

constexpr int32_t const& __cordl_internal_get_cnt() const;

constexpr int32_t& __cordl_internal_get_cnt() ;

constexpr void __cordl_internal_set_buff(::System::Collections::Generic::List_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_cnt(int32_t  value) ;

/// @brief Method .ctor, addr 0xb983244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <readHeaders>b__0, addr 0xb98329c, size 0xfc, virtual false, abstract: false, final false
inline void _readHeaders_b__0(int32_t  i) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpBase___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass13_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpBase___c__DisplayClass13_0(HttpBase___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpBase___c__DisplayClass13_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpBase___c__DisplayClass13_0(HttpBase___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30352};

/// @brief Field buff, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint8_t>*  ___buff;

/// @brief Field cnt, offset: 0x18, size: 0x4, def value: None
 int32_t  ___cnt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::HttpBase___c__DisplayClass13_0, ___buff) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::HttpBase___c__DisplayClass13_0, ___cnt) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::HttpBase___c__DisplayClass13_0) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp
