#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UploadHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadHandler)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Networking {
class UploadHandler_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandler;
}
namespace UnityEngine::Networking {
class UploadHandler_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::UploadHandler*);
MARK_REF_T(::UnityEngine::Networking::UploadHandler_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::UploadHandler_BindingsMarshaller*, "UnityEngine.Networking", "UploadHandler/BindingsMarshaller");
// [NativeHeader("Modules/UnityWebRequest/Public/UploadHandler/UploadHandler.h")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UploadHandler
class CORDL_TYPE UploadHandler : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Networking::UploadHandler_BindingsMarshaller;

 __declspec(property(get=get_contentType, put=set_contentType)) ::StringW  contentType;

 __declspec(property(get=get_data)) ::ArrayW<uint8_t>  data;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xb92c738, size 0x20, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0xb92c6ac, size 0x8c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetContentType, addr 0xb92c778, size 0x4, virtual true, abstract: false, final false
inline ::StringW GetContentType() ;

/// @brief Method GetData, addr 0xb92c770, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetData() ;

/// [NativeMethod("GetContentType")]
/// @brief Method InternalGetContentType, addr 0xb92c77c, size 0x100, virtual false, abstract: false, final false
inline ::StringW InternalGetContentType() ;

/// @brief Method InternalGetContentType_Injected, addr 0xb92ca10, size 0x44, virtual false, abstract: false, final false
static inline void InternalGetContentType_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [NativeMethod("SetContentType")]
/// @brief Method InternalSetContentType, addr 0xb92c880, size 0x190, virtual false, abstract: false, final false
inline void InternalSetContentType(::StringW  newContentType) ;

/// @brief Method InternalSetContentType_Injected, addr 0xb92ca54, size 0x44, virtual false, abstract: false, final false
static inline void InternalSetContentType_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  newContentType) ;

static inline ::UnityEngine::Networking::UploadHandler* New_ctor() ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method ReleaseFromScripting, addr 0xb92c618, size 0x50, virtual false, abstract: false, final false
inline void ReleaseFromScripting() ;

/// @brief Method ReleaseFromScripting_Injected, addr 0xb92c668, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseFromScripting_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SetContentType, addr 0xb92c87c, size 0x4, virtual true, abstract: false, final false
inline void SetContentType(::StringW  newContentType) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb92c6a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_contentType, addr 0xb92c764, size 0xc, virtual false, abstract: false, final false
inline ::StringW get_contentType() ;

/// @brief Method get_data, addr 0xb92c758, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_data() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_contentType, addr 0xb92b9b8, size 0xc, virtual false, abstract: false, final false
inline void set_contentType(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadHandler(UploadHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadHandler(UploadHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31727};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UploadHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::UploadHandler) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Networking
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UploadHandler/BindingsMarshaller
class CORDL_TYPE UploadHandler_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb92ca98, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::UploadHandler*  uploadHandler) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadHandler_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadHandler_BindingsMarshaller(UploadHandler_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadHandler_BindingsMarshaller(UploadHandler_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Networking::UploadHandler_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Networking
