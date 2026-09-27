#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/UnityWebRequestExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequestExtensions)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Backtrace::Unity::Extensions {
class UnityWebRequestExtensions;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Extensions::UnityWebRequestExtensions*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Extensions::UnityWebRequestExtensions*, "Backtrace.Unity.Extensions", "UnityWebRequestExtensions");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Extensions {
// Is value type: false
// CS Name: Backtrace.Unity.Extensions.UnityWebRequestExtensions
class CORDL_TYPE UnityWebRequestExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IgnoreSsl, addr 0x5f262ac, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* IgnoreSsl(::UnityEngine::Networking::UnityWebRequest*  source, bool  shouldIgnore) ;

/// [Extension]
/// @brief Method ReceivedNetworkError, addr 0x5f261f4, size 0x44, virtual false, abstract: false, final false
static inline bool ReceivedNetworkError(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// [Extension]
/// @brief Method SetJsonContentType, addr 0x5f26238, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* SetJsonContentType(::UnityEngine::Networking::UnityWebRequest*  source) ;

/// [Extension]
/// @brief Method SetMultipartFormData, addr 0x5f26128, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* SetMultipartFormData(::UnityEngine::Networking::UnityWebRequest*  source, ::ArrayW<uint8_t>  boundaryId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestExtensions(UnityWebRequestExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestExtensions(UnityWebRequestExtensions const& ) = delete;

/// @brief Field ContentTypeHeader offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentTypeHeader{u"Content-Type"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Extensions::UnityWebRequestExtensions) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Extensions
