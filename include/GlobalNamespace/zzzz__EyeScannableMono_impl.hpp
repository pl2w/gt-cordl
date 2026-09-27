#pragma once
// IWYU pragma private; include "GlobalNamespace/EyeScannableMono.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__EyeScannableMono_def.hpp"
#include "GlobalNamespace/zzzz__EyeScannableMono__RecalculateBoundsLater_d__17_def.hpp"
#include "GlobalNamespace/zzzz__IEyeScannable_def.hpp"
#include "GlobalNamespace/zzzz__KeyValuePairSet_def.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.add_OnDataChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)(::System::Action*)>(&::GlobalNamespace::EyeScannableMono::add_OnDataChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57edcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"add_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.remove_OnDataChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)(::System::Action*)>(&::GlobalNamespace::EyeScannableMono::remove_OnDataChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57edd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"remove_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.IEyeScannable_get_scannableId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::IEyeScannable_get_scannableId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ede10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_scannableId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.IEyeScannable_get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::IEyeScannable_get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57ede18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.IEyeScannable_get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::IEyeScannable_get_Bounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57ede68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.IEyeScannable_get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::IEyeScannable_get_Entries)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57ede7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ede94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57ee0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x57ee360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.RecalculateBoundsLater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::RecalculateBoundsLater)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57ee120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"RecalculateBoundsLater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono.RecalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::RecalculateBounds)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x57ede98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannableMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannableMono::*)()>(&::GlobalNamespace::EyeScannableMono::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ee4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::EyeScannableMono::__cordl_internal_get_OnDataChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataChange;
}
constexpr ::System::Action* const& GlobalNamespace::EyeScannableMono::__cordl_internal_get_OnDataChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataChange;
}
constexpr void GlobalNamespace::EyeScannableMono::__cordl_internal_set_OnDataChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDataChange = value;
}
constexpr ::UnityW<::GlobalNamespace::KeyValuePairSet>& GlobalNamespace::EyeScannableMono::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::UnityW<::GlobalNamespace::KeyValuePairSet> const& GlobalNamespace::EyeScannableMono::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::EyeScannableMono::__cordl_internal_set_data(::UnityW<::GlobalNamespace::KeyValuePairSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::EyeScannableMono::__cordl_internal_get__bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::EyeScannableMono::__cordl_internal_get__bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bounds;
}
constexpr void GlobalNamespace::EyeScannableMono::__cordl_internal_set__bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bounds = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::EyeScannableMono::__cordl_internal_get__initialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::EyeScannableMono::__cordl_internal_get__initialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialPosition;
}
constexpr void GlobalNamespace::EyeScannableMono::__cordl_internal_set__initialPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialPosition = value;
}
inline void GlobalNamespace::EyeScannableMono::add_OnDataChange(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"add_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EyeScannableMono::remove_OnDataChange(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"remove_OnDataChange", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::EyeScannableMono::IEyeScannable_get_scannableId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_scannableId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::EyeScannableMono::IEyeScannable_get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Bounds GlobalNamespace::EyeScannableMono::IEyeScannable_get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* GlobalNamespace::EyeScannableMono::IEyeScannable_get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"IEyeScannable.get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannableMono::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannableMono::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannableMono::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannableMono::RecalculateBoundsLater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"RecalculateBoundsLater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannableMono::RecalculateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannableMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannableMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EyeScannableMono* GlobalNamespace::EyeScannableMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EyeScannableMono*>());
}
/// @brief Convert operator to "::GlobalNamespace::IEyeScannable"
constexpr  GlobalNamespace::EyeScannableMono::operator ::GlobalNamespace::IEyeScannable*() noexcept {
return static_cast<::GlobalNamespace::IEyeScannable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEyeScannable"
constexpr ::GlobalNamespace::IEyeScannable* GlobalNamespace::EyeScannableMono::i___GlobalNamespace__IEyeScannable() noexcept {
return static_cast<::GlobalNamespace::IEyeScannable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EyeScannableMono::EyeScannableMono()   {
}
