#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHttpClientUnity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipSendHTTPRequestDelegateWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MothershipHttpClientUnity)
namespace GlobalNamespace {
class MothershipClientApiClient;
}
namespace GlobalNamespace {
class MothershipHTTPRequest;
}
namespace GlobalNamespace {
class MothershipHTTPResponse;
}
namespace GlobalNamespace {
class MothershipHttpClientUnity___c__DisplayClass3_0;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipHttpClientUnity;
}
namespace GlobalNamespace {
class MothershipHttpClientUnity___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipHttpClientUnity*);
MARK_REF_T(::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipHttpClientUnity*, "", "MothershipHttpClientUnity");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0*, "", "MothershipHttpClientUnity/<>c__DisplayClass3_0");
// Dependencies MothershipSendHTTPRequestDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipHttpClientUnity
class CORDL_TYPE MothershipHttpClientUnity : public ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper {
public:
// Declarations
using __c__DisplayClass3_0 = ::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0;

/// @brief Field client, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::GlobalNamespace::MothershipClientApiClient*  client;

/// @brief Field isRequestLoggingEnabled, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRequestLoggingEnabled, put=__cordl_internal_set_isRequestLoggingEnabled)) bool  isRequestLoggingEnabled;

static inline ::GlobalNamespace::MothershipHttpClientUnity* New_ctor(::GlobalNamespace::MothershipClientApiClient*  client, bool  isRequestLoggingEnabled) ;

/// @brief Method SendRequest, addr 0x53c0080, size 0x540, virtual true, abstract: false, final false
inline bool SendRequest(::GlobalNamespace::MothershipHTTPRequest*  request) ;

constexpr ::GlobalNamespace::MothershipClientApiClient* const& __cordl_internal_get_client() const;

constexpr ::GlobalNamespace::MothershipClientApiClient*& __cordl_internal_get_client() ;

constexpr bool const& __cordl_internal_get_isRequestLoggingEnabled() const;

constexpr bool& __cordl_internal_get_isRequestLoggingEnabled() ;

constexpr void __cordl_internal_set_client(::GlobalNamespace::MothershipClientApiClient*  value) ;

constexpr void __cordl_internal_set_isRequestLoggingEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x53bfff8, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MothershipClientApiClient*  client, bool  isRequestLoggingEnabled) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipHttpClientUnity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpClientUnity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipHttpClientUnity(MothershipHttpClientUnity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpClientUnity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipHttpClientUnity(MothershipHttpClientUnity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9767};

/// @brief Field client, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::MothershipClientApiClient*  ___client;

/// @brief Field isRequestLoggingEnabled, offset: 0x38, size: 0x1, def value: None
 bool  ___isRequestLoggingEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipHttpClientUnity, ___client) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHttpClientUnity, ___isRequestLoggingEnabled) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipHttpClientUnity) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipHttpClientUnity/<>c__DisplayClass3_0
class CORDL_TYPE MothershipHttpClientUnity___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::MothershipHttpClientUnity*  __4__this;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::GlobalNamespace::MothershipHTTPRequest*  request;

static inline ::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <SendRequest>b__0, addr 0x53c0634, size 0x118, virtual false, abstract: false, final false
inline void _SendRequest_b__0(::GlobalNamespace::MothershipHTTPResponse*  Response) ;

constexpr ::GlobalNamespace::MothershipHttpClientUnity* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::MothershipHttpClientUnity*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::MothershipHTTPRequest* const& __cordl_internal_get_request() const;

constexpr ::GlobalNamespace::MothershipHTTPRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MothershipHttpClientUnity*  value) ;

constexpr void __cordl_internal_set_request(::GlobalNamespace::MothershipHTTPRequest*  value) ;

/// @brief Method .ctor, addr 0x53c05c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipHttpClientUnity___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpClientUnity___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipHttpClientUnity___c__DisplayClass3_0(MothershipHttpClientUnity___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpClientUnity___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipHttpClientUnity___c__DisplayClass3_0(MothershipHttpClientUnity___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9766};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::MothershipHttpClientUnity*  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::MothershipHTTPRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
