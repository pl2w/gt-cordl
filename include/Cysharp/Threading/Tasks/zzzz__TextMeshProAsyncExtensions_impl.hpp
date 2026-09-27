#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TextMeshProAsyncExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TextMeshProAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncDeselectEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndEditEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndTextSelectionEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncSelectEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncSubmitEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncTextSelectionEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncValueChangedEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TextMeshProAsyncExtensions__BindToCore_d__2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TextMeshProAsyncExtensions__BindToCore_d__6_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::TMPro::TMP_Text*, bool)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae26ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::TMPro::TMP_Text*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xae2712c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.BindToCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::TMPro::TMP_Text*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindToCore)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xae27050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae27150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae271f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae27278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae27358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae27428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae274c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae27548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae275e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae27670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae27750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae27820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae278bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xae27940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae27a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae27ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xae27bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xae27cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae27d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xae27e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae27f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae27fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xae280e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xae281e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae282a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncDeselectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae28360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncDeselectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae28400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae28488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae28568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae28638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae286d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSelectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae28758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSelectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae287f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae28880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae28960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae28a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae28acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSubmitEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae28b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSubmitEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae28bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae28c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae28d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae28e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae28ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindToCore", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::TextMeshProAsyncExtensions()   {
}
