#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/JointRotationHistoryHand.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__JointRotationHistoryHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::JointRotationHistoryHand.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::JointRotationHistoryHand::*)()>(&::Oculus::Interaction::Input::JointRotationHistoryHand::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa5081b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::JointRotationHistoryHand.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::JointRotationHistoryHand::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::JointRotationHistoryHand::Apply)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xa508300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::JointRotationHistoryHand.SetHistoryOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::JointRotationHistoryHand::*)(int32_t)>(&::Oculus::Interaction::Input::JointRotationHistoryHand::SetHistoryOffset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa508574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {"SetHistoryOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::JointRotationHistoryHand.InjectAllJointHistoryHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::JointRotationHistoryHand::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*, bool, int32_t, int32_t)>(&::Oculus::Interaction::Input::JointRotationHistoryHand::InjectAllJointHistoryHand)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa508590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {"InjectAllJointHistoryHand", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::JointRotationHistoryHand.InjectHistoryLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::JointRotationHistoryHand::*)(int32_t)>(&::Oculus::Interaction::Input::JointRotationHistoryHand::InjectHistoryLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5085c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {"InjectHistoryLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::JointRotationHistoryHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::JointRotationHistoryHand::*)()>(&::Oculus::Interaction::Input::JointRotationHistoryHand::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa5085d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__historyLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyLength;
}
constexpr int32_t const& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__historyLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyLength;
}
constexpr void Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_set__historyLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____historyLength = value;
}
constexpr int32_t& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__historyOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyOffset;
}
constexpr int32_t const& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__historyOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyOffset;
}
constexpr void Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_set__historyOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____historyOffset = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Quaternion>>& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__jointHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointHistory;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Quaternion>> const& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__jointHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointHistory;
}
constexpr void Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_set__jointHistory(::ArrayW<::ArrayW<::UnityEngine::Quaternion>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointHistory = value;
}
constexpr int32_t& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__historyIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyIndex;
}
constexpr int32_t const& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__historyIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyIndex;
}
constexpr void Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_set__historyIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____historyIndex = value;
}
constexpr int32_t& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__capturedDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capturedDataVersion;
}
constexpr int32_t const& Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_get__capturedDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capturedDataVersion;
}
constexpr void Oculus::Interaction::Input::JointRotationHistoryHand::__cordl_internal_set__capturedDataVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capturedDataVersion = value;
}
inline void Oculus::Interaction::Input::JointRotationHistoryHand::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::JointRotationHistoryHand::Apply(::Oculus::Interaction::Input::HandDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::JointRotationHistoryHand::SetHistoryOffset(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {"SetHistoryOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Oculus::Interaction::Input::JointRotationHistoryHand::InjectAllJointHistoryHand(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier, int32_t  historyLength, int32_t  historyOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {"InjectAllJointHistoryHand", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, modifyDataFromSource, applyModifier, historyLength, historyOffset);
}
inline void Oculus::Interaction::Input::JointRotationHistoryHand::InjectHistoryLength(int32_t  historyLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {"InjectHistoryLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, historyLength);
}
inline void Oculus::Interaction::Input::JointRotationHistoryHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointRotationHistoryHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::JointRotationHistoryHand* Oculus::Interaction::Input::JointRotationHistoryHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::JointRotationHistoryHand*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::JointRotationHistoryHand::JointRotationHistoryHand()   {
}
