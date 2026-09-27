#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractionLayerSettings.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettings_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.GetInstanceOrLoadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings> (*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetInstanceOrLoadOnly)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb4077b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetInstanceOrLoadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.IsLayerEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::IsLayerEmpty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb407988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"IsLayerEmpty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.SetLayerNameAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(int32_t, ::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::SetLayerNameAt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4079bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"SetLayerNameAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.GetLayerNameAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNameAt)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4075d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetLayerNameAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.GetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb40766c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetLayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.GetLayerNamesAndValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNamesAndValues)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb4079f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetLayerNamesAndValues", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb407b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb407c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb407c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::__cordl_internal_get_m_LayerNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LayerNames;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::__cordl_internal_get_m_LayerNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LayerNames;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::__cordl_internal_set_m_LayerNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LayerNames = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings> UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetInstanceOrLoadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetInstanceOrLoadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings>>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::IsLayerEmpty(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"IsLayerEmpty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::SetLayerNameAt(int32_t  index, ::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"SetLayerNameAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, layerName);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNameAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetLayerNameAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayer(::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetLayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerName);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNamesAndValues(::System::Collections::Generic::List_1<::StringW>*  names, ::System::Collections::Generic::List_1<int32_t>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"GetLayerNamesAndValues", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, names, values);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings* UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::InteractionLayerSettings()   {
}
