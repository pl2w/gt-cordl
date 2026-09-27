#pragma once
// IWYU pragma private; include "Meta/Voice/VoiceRequestEvents_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VoiceRequestEvents_1)
// Forward declare root types
namespace Meta::Voice {
template<typename TUnityEvent>
class VoiceRequestEvents_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::VoiceRequestEvents_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::VoiceRequestEvents_1, "Meta.Voice", "VoiceRequestEvents`1");
// Dependencies System.Object
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent>
// Is value type: false
// CS Name: Meta.Voice.VoiceRequestEvents`1<TUnityEvent>
class CORDL_TYPE VoiceRequestEvents_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_OnCancel)) TUnityEvent  OnCancel;

 __declspec(property(get=get_OnComplete)) TUnityEvent  OnComplete;

 __declspec(property(get=get_OnDownloadProgressChange)) TUnityEvent  OnDownloadProgressChange;

 __declspec(property(get=get_OnFailed)) TUnityEvent  OnFailed;

 __declspec(property(get=get_OnInit)) TUnityEvent  OnInit;

 __declspec(property(get=get_OnSend)) TUnityEvent  OnSend;

 __declspec(property(get=get_OnStateChange)) TUnityEvent  OnStateChange;

 __declspec(property(get=get_OnSuccess)) TUnityEvent  OnSuccess;

 __declspec(property(get=get_OnUploadProgressChange)) TUnityEvent  OnUploadProgressChange;

/// @brief Field _onCancel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__onCancel, put=__cordl_internal_set__onCancel)) TUnityEvent  _onCancel;

/// @brief Field _onComplete, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__onComplete, put=__cordl_internal_set__onComplete)) TUnityEvent  _onComplete;

/// @brief Field _onDownloadProgressChange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onDownloadProgressChange, put=__cordl_internal_set__onDownloadProgressChange)) TUnityEvent  _onDownloadProgressChange;

/// @brief Field _onFailed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onFailed, put=__cordl_internal_set__onFailed)) TUnityEvent  _onFailed;

/// @brief Field _onInit, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__onInit, put=__cordl_internal_set__onInit)) TUnityEvent  _onInit;

/// @brief Field _onSend, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSend, put=__cordl_internal_set__onSend)) TUnityEvent  _onSend;

/// @brief Field _onStateChange, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStateChange, put=__cordl_internal_set__onStateChange)) TUnityEvent  _onStateChange;

/// @brief Field _onSuccess, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSuccess, put=__cordl_internal_set__onSuccess)) TUnityEvent  _onSuccess;

/// @brief Field _onUploadProgressChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onUploadProgressChange, put=__cordl_internal_set__onUploadProgressChange)) TUnityEvent  _onUploadProgressChange;

static inline ::Meta::Voice::VoiceRequestEvents_1<TUnityEvent>* New_ctor() ;

constexpr TUnityEvent const& __cordl_internal_get__onCancel() const;

constexpr TUnityEvent& __cordl_internal_get__onCancel() ;

constexpr TUnityEvent const& __cordl_internal_get__onComplete() const;

constexpr TUnityEvent& __cordl_internal_get__onComplete() ;

constexpr TUnityEvent const& __cordl_internal_get__onDownloadProgressChange() const;

constexpr TUnityEvent& __cordl_internal_get__onDownloadProgressChange() ;

constexpr TUnityEvent const& __cordl_internal_get__onFailed() const;

constexpr TUnityEvent& __cordl_internal_get__onFailed() ;

constexpr TUnityEvent const& __cordl_internal_get__onInit() const;

constexpr TUnityEvent& __cordl_internal_get__onInit() ;

constexpr TUnityEvent const& __cordl_internal_get__onSend() const;

constexpr TUnityEvent& __cordl_internal_get__onSend() ;

constexpr TUnityEvent const& __cordl_internal_get__onStateChange() const;

constexpr TUnityEvent& __cordl_internal_get__onStateChange() ;

constexpr TUnityEvent const& __cordl_internal_get__onSuccess() const;

constexpr TUnityEvent& __cordl_internal_get__onSuccess() ;

constexpr TUnityEvent const& __cordl_internal_get__onUploadProgressChange() const;

constexpr TUnityEvent& __cordl_internal_get__onUploadProgressChange() ;

constexpr void __cordl_internal_set__onCancel(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onComplete(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onDownloadProgressChange(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onFailed(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onInit(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onSend(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onStateChange(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onSuccess(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onUploadProgressChange(TUnityEvent  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnCancel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnCancel() ;

/// @brief Method get_OnComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnComplete() ;

/// @brief Method get_OnDownloadProgressChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnDownloadProgressChange() ;

/// @brief Method get_OnFailed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnFailed() ;

/// @brief Method get_OnInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnInit() ;

/// @brief Method get_OnSend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnSend() ;

/// @brief Method get_OnStateChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnStateChange() ;

/// @brief Method get_OnSuccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnSuccess() ;

/// @brief Method get_OnUploadProgressChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnUploadProgressChange() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceRequestEvents_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceRequestEvents_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceRequestEvents_1(VoiceRequestEvents_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceRequestEvents_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceRequestEvents_1(VoiceRequestEvents_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25455};

/// [Header("State Events")]
/// [Tooltip("Called whenever a request state changes.")]
/// [SerializeField]
/// @brief Field _onStateChange, offset: 0x10, size: 0x8, def value: None
 TUnityEvent  ____onStateChange;

/// [Tooltip("Called on initial request generation.")]
/// [SerializeField]
/// @brief Field _onInit, offset: 0x18, size: 0x8, def value: None
 TUnityEvent  ____onInit;

/// [Tooltip("Called following the start of data transmission.")]
/// [SerializeField]
/// @brief Field _onSend, offset: 0x20, size: 0x8, def value: None
 TUnityEvent  ____onSend;

/// [Tooltip("Called following the cancellation of a request.")]
/// [SerializeField]
/// @brief Field _onCancel, offset: 0x28, size: 0x8, def value: None
 TUnityEvent  ____onCancel;

/// [Tooltip("Called following an error response from a request.")]
/// [SerializeField]
/// @brief Field _onFailed, offset: 0x30, size: 0x8, def value: None
 TUnityEvent  ____onFailed;

/// [Tooltip("Called following a successful request & data parse with results provided.")]
/// [SerializeField]
/// @brief Field _onSuccess, offset: 0x38, size: 0x8, def value: None
 TUnityEvent  ____onSuccess;

/// [Tooltip("Called following cancellation, failure or success to finalize request.")]
/// [SerializeField]
/// @brief Field _onComplete, offset: 0x40, size: 0x8, def value: None
 TUnityEvent  ____onComplete;

/// [Header("Progress Events")]
/// [Tooltip("Called on download progress update.")]
/// [SerializeField]
/// @brief Field _onDownloadProgressChange, offset: 0x48, size: 0x8, def value: None
 TUnityEvent  ____onDownloadProgressChange;

/// [Tooltip("Called on upload progress update.")]
/// [SerializeField]
/// @brief Field _onUploadProgressChange, offset: 0x50, size: 0x8, def value: None
 TUnityEvent  ____onUploadProgressChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
