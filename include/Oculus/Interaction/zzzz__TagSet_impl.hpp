#pragma once
// IWYU pragma private; include "Oculus/Interaction/TagSet.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__TagSet_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TagSet.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSet::*)()>(&::Oculus::Interaction::TagSet::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa44317c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                    {::i2c::class_of<::Oculus::Interaction::TagSet*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSet.ContainsTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TagSet::*)(::StringW)>(&::Oculus::Interaction::TagSet::ContainsTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4432cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"ContainsTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSet.AddTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSet::*)(::StringW)>(&::Oculus::Interaction::TagSet::AddTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa443324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"AddTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSet.RemoveTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSet::*)(::StringW)>(&::Oculus::Interaction::TagSet::RemoveTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa44337c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"RemoveTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSet.InjectOptionalTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSet::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Oculus::Interaction::TagSet::InjectOptionalTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4433d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"InjectOptionalTags", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSet::*)()>(&::Oculus::Interaction::TagSet::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4433dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Oculus::Interaction::TagSet::__cordl_internal_get__tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Oculus::Interaction::TagSet::__cordl_internal_get__tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr void Oculus::Interaction::TagSet::__cordl_internal_set__tags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tags = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Oculus::Interaction::TagSet::__cordl_internal_get__tagSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Oculus::Interaction::TagSet::__cordl_internal_get__tagSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagSet;
}
constexpr void Oculus::Interaction::TagSet::__cordl_internal_set__tagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tagSet = value;
}
inline void Oculus::Interaction::TagSet::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TagSet*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TagSet::ContainsTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"ContainsTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSet::AddTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"AddTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSet::RemoveTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"RemoveTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSet::InjectOptionalTags(::System::Collections::Generic::List_1<::StringW>*  tags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {"InjectOptionalTags", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tags);
}
inline void Oculus::Interaction::TagSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TagSet* Oculus::Interaction::TagSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TagSet*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TagSet::TagSet()   {
}
