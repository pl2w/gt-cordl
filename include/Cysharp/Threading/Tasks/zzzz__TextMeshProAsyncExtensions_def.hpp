#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TextMeshProAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextMeshProAsyncExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncDeselectEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndEditEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndTextSelectionEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncSelectEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncSubmitEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncTextSelectionEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncValueChangedEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
struct TextMeshProAsyncExtensions__BindToCore_d__2;
}
namespace GlobalNamespace {
template<typename T>
struct TextMeshProAsyncExtensions__BindToCore_d__6_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class TextMeshProAsyncExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*, "Cysharp.Threading.Tasks", "TextMeshProAsyncExtensions");
// [Extension]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.TextMeshProAsyncExtensions
class CORDL_TYPE TextMeshProAsyncExtensions : public ::System::Object {
public:
// Declarations
using _BindToCore_d__2 = ::GlobalNamespace::TextMeshProAsyncExtensions__BindToCore_d__2;

template<typename T>
using _BindToCore_d__6_1 = ::GlobalNamespace::TextMeshProAsyncExtensions__BindToCore_d__6_1<T>;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0xae2712c, size 0x24, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0xae26ff4, size 0x5c, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::<BindToCore>d__2))]
/// @brief Method BindToCore, addr 0xae27050, size 0xdc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::<BindToCore>d__6`1<T>))]
/// @brief Method BindToCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [Extension]
/// @brief Method GetAsyncDeselectEventHandler, addr 0xae28360, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncDeselectEventHandler, addr 0xae28400, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncEndEditEventHandler, addr 0xae27548, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncEndEditEventHandler, addr 0xae275e8, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncEndTextSelectionEventHandler, addr 0xae27940, size 0xcc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncEndTextSelectionEventHandler, addr 0xae27a0c, size 0xbc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncSelectEventHandler, addr 0xae28758, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncSelectEventHandler, addr 0xae287f8, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncSubmitEventHandler, addr 0xae28b50, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncSubmitEventHandler, addr 0xae28bf0, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncTextSelectionEventHandler, addr 0xae27e50, size 0xcc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncTextSelectionEventHandler, addr 0xae27f1c, size 0xbc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae27150, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae271f0, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnDeselectAsAsyncEnumerable, addr 0xae28638, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnDeselectAsAsyncEnumerable, addr 0xae286d4, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnDeselectAsync, addr 0xae28488, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnDeselectAsync(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnDeselectAsync, addr 0xae28568, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnDeselectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnEndEditAsAsyncEnumerable, addr 0xae27820, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnEndEditAsAsyncEnumerable, addr 0xae278bc, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnEndEditAsync, addr 0xae27670, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnEndEditAsync, addr 0xae27750, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnEndTextSelectionAsAsyncEnumerable, addr 0xae27cd0, size 0xc8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnEndTextSelectionAsAsyncEnumerable, addr 0xae27d98, size 0xb8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnEndTextSelectionAsync, addr 0xae27ac8, size 0x10c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnEndTextSelectionAsync, addr 0xae27bd4, size 0xfc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnSelectAsAsyncEnumerable, addr 0xae28a30, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnSelectAsAsyncEnumerable, addr 0xae28acc, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnSelectAsync, addr 0xae28880, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSelectAsync(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnSelectAsync, addr 0xae28960, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSelectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnSubmitAsAsyncEnumerable, addr 0xae28e28, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnSubmitAsAsyncEnumerable, addr 0xae28ec4, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnSubmitAsync, addr 0xae28c78, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSubmitAsync(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnSubmitAsync, addr 0xae28d58, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSubmitAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnTextSelectionAsAsyncEnumerable, addr 0xae281e0, size 0xc8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnTextSelectionAsAsyncEnumerable, addr 0xae282a8, size 0xb8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnTextSelectionAsync, addr 0xae27fd8, size 0x10c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnTextSelectionAsync, addr 0xae280e4, size 0xfc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae27428, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae274c4, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae27278, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::TMPro::TMP_InputField*  inputField) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae27358, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextMeshProAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAsyncExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMeshProAsyncExtensions(TextMeshProAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAsyncExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMeshProAsyncExtensions(TextMeshProAsyncExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32898};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
