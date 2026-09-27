#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/XRLoggingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XRLoggingUtils)
namespace System {
class Exception;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class XRLoggingUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::XRLoggingUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::XRLoggingUtils*, "Unity.XR.CoreUtils", "XRLoggingUtils");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.XRLoggingUtils
class CORDL_TYPE XRLoggingUtils : public ::System::Object {
public:
// Declarations
/// @brief Field k_DontLogAnything, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_k_DontLogAnything, put=setStaticF_k_DontLogAnything)) bool  k_DontLogAnything;

/// @brief Method Log, addr 0xb3facc8, size 0xac, virtual false, abstract: false, final false
static inline void Log(::StringW  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogError, addr 0xb3fae20, size 0xac, virtual false, abstract: false, final false
static inline void LogError(::StringW  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogException, addr 0xb3faecc, size 0xac, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception, ::UnityEngine::Object*  context) ;

/// @brief Method LogWarning, addr 0xb3fad74, size 0xac, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  message, ::UnityEngine::Object*  context) ;

static inline bool getStaticF_k_DontLogAnything() ;

static inline void setStaticF_k_DontLogAnything(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRLoggingUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRLoggingUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRLoggingUtils(XRLoggingUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRLoggingUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRLoggingUtils(XRLoggingUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30434};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::XRLoggingUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
