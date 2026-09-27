#pragma once
// IWYU pragma private; include "GlobalNamespace/GRScannable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRScannable_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRScannable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRScannable::*)()>(&::GlobalNamespace::GRScannable::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58aa24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRScannable.GetTitleText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRScannable::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRScannable::GetTitleText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aa2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRScannable.GetBodyText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRScannable::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRScannable::GetBodyText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aa2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRScannable.GetAnnotationText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRScannable::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRScannable::GetAnnotationText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aa300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRScannable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRScannable::*)()>(&::GlobalNamespace::GRScannable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aa308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRScannable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRScannable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRScannable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRScannable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::StringW& GlobalNamespace::GRScannable::__cordl_internal_get_titleText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleText;
}
constexpr ::StringW const& GlobalNamespace::GRScannable::__cordl_internal_get_titleText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleText;
}
constexpr void GlobalNamespace::GRScannable::__cordl_internal_set_titleText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleText = value;
}
constexpr ::StringW& GlobalNamespace::GRScannable::__cordl_internal_get_bodyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyText;
}
constexpr ::StringW const& GlobalNamespace::GRScannable::__cordl_internal_get_bodyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyText;
}
constexpr void GlobalNamespace::GRScannable::__cordl_internal_set_bodyText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyText = value;
}
constexpr ::StringW& GlobalNamespace::GRScannable::__cordl_internal_get_annotationText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___annotationText;
}
constexpr ::StringW const& GlobalNamespace::GRScannable::__cordl_internal_get_annotationText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___annotationText;
}
constexpr void GlobalNamespace::GRScannable::__cordl_internal_set_annotationText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___annotationText = value;
}
inline void GlobalNamespace::GRScannable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GRScannable::GetTitleText(::GlobalNamespace::GhostReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reactor);
}
inline ::StringW GlobalNamespace::GRScannable::GetBodyText(::GlobalNamespace::GhostReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reactor);
}
inline ::StringW GlobalNamespace::GRScannable::GetAnnotationText(::GlobalNamespace::GhostReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRScannable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reactor);
}
inline void GlobalNamespace::GRScannable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRScannable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRScannable* GlobalNamespace::GRScannable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRScannable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRScannable::GRScannable()   {
}
