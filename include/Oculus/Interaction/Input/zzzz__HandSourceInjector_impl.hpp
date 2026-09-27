#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSourceInjector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSourceInjector_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSourceInjector_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector::*)()>(&::Oculus::Interaction::Input::HandSourceInjector::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa5123bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector::*)()>(&::Oculus::Interaction::Input::HandSourceInjector::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa51261c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector.UpdateActiveSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector::*)()>(&::Oculus::Interaction::Input::HandSourceInjector::UpdateActiveSource)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa512514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {"UpdateActiveSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector.ApplySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector::*)(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*)>(&::Oculus::Interaction::Input::HandSourceInjector::ApplySource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa51259c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {"ApplySource", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector::*)()>(&::Oculus::Interaction::Input::HandSourceInjector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5126f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Input::Hand>& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__targetHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetHand;
}
constexpr ::UnityW<::Oculus::Interaction::Input::Hand> const& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__targetHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetHand;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_set__targetHand(::UnityW<::Oculus::Interaction::Input::Hand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetHand = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*> const& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_set__sources(::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sources = value;
}
constexpr ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__activeDataSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeDataSource;
}
constexpr ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource* const& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__activeDataSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeDataSource;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_set__activeDataSource(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeDataSource = value;
}
constexpr bool& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Input::HandSourceInjector::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandSourceInjector::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandSourceInjector::UpdateActiveSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {"UpdateActiveSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandSourceInjector::ApplySource(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*  activeDataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {"ApplySource", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeDataSource);
}
inline void Oculus::Interaction::Input::HandSourceInjector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandSourceInjector* Oculus::Interaction::Input::HandSourceInjector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandSourceInjector*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandSourceInjector::HandSourceInjector()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource.get_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>* (::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::*)()>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::get_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa512700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"get_Source", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource.set_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::*)(::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*)>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::set_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa512708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"set_Source", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource.get_ModifyAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IDataSource* (::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::*)()>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::get_ModifyAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa512710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"get_ModifyAfter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource.set_ModifyAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::*)(::Oculus::Interaction::Input::IDataSource*)>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::set_ModifyAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa512718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"set_ModifyAfter", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::*)()>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa51246c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::*)()>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::IsActive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa51264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::*)()>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa512724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource._Initialize_g__AssertField_10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::_Initialize_g__AssertField_10_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa512720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"<Initialize>g__AssertField|10_0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_set__source(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__Source_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>* const& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__Source_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_set__Source_k__BackingField(::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Source_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__modifyAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifyAfter;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__modifyAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifyAfter;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_set__modifyAfter(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modifyAfter = value;
}
constexpr ::Oculus::Interaction::Input::IDataSource*& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__ModifyAfter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ModifyAfter_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IDataSource* const& Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_get__ModifyAfter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ModifyAfter_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::__cordl_internal_set__ModifyAfter_k__BackingField(::Oculus::Interaction::Input::IDataSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ModifyAfter_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>* Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::get_Source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"get_Source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::set_Source(::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"set_Source", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IDataSource* Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::get_ModifyAfter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"get_ModifyAfter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IDataSource*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::set_ModifyAfter(::Oculus::Interaction::Input::IDataSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"set_ModifyAfter", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::_Initialize_g__AssertField_10_0(::System::Object*  obj, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>(),
                        {"<Initialize>g__AssertField|10_0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, name);
}
inline ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource* Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource::HandSourceInjector_ActiveDataSource()   {
}
