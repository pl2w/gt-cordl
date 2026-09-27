#pragma once
// IWYU pragma private; include "Oculus/Interaction/TagSetFilter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__TagSetFilter_def.hpp"
#include "Oculus/Interaction/zzzz__IGameObjectFilter_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)()>(&::Oculus::Interaction::TagSetFilter::Start)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa443464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                    {::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TagSetFilter::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::TagSetFilter::Filter)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa44354c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"Filter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.ContainsRequireTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TagSetFilter::*)(::StringW)>(&::Oculus::Interaction::TagSetFilter::ContainsRequireTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4437d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"ContainsRequireTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.AddRequireTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)(::StringW)>(&::Oculus::Interaction::TagSetFilter::AddRequireTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa443830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"AddRequireTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.RemoveRequireTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)(::StringW)>(&::Oculus::Interaction::TagSetFilter::RemoveRequireTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa443888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"RemoveRequireTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.ContainsExcludeTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TagSetFilter::*)(::StringW)>(&::Oculus::Interaction::TagSetFilter::ContainsExcludeTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4438e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"ContainsExcludeTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.AddExcludeTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)(::StringW)>(&::Oculus::Interaction::TagSetFilter::AddExcludeTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa443938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"AddExcludeTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.RemoveExcludeTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)(::StringW)>(&::Oculus::Interaction::TagSetFilter::RemoveExcludeTag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa443990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"RemoveExcludeTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.InjectOptionalRequireTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)(::ArrayW<::StringW>)>(&::Oculus::Interaction::TagSetFilter::InjectOptionalRequireTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4439e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"InjectOptionalRequireTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter.InjectOptionalExcludeTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)(::ArrayW<::StringW>)>(&::Oculus::Interaction::TagSetFilter::InjectOptionalExcludeTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4439f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"InjectOptionalExcludeTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TagSetFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TagSetFilter::*)()>(&::Oculus::Interaction::TagSetFilter::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4439f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& Oculus::Interaction::TagSetFilter::__cordl_internal_get__requireTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireTags;
}
constexpr ::ArrayW<::StringW> const& Oculus::Interaction::TagSetFilter::__cordl_internal_get__requireTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireTags;
}
constexpr void Oculus::Interaction::TagSetFilter::__cordl_internal_set__requireTags(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requireTags = value;
}
constexpr ::ArrayW<::StringW>& Oculus::Interaction::TagSetFilter::__cordl_internal_get__excludeTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeTags;
}
constexpr ::ArrayW<::StringW> const& Oculus::Interaction::TagSetFilter::__cordl_internal_get__excludeTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeTags;
}
constexpr void Oculus::Interaction::TagSetFilter::__cordl_internal_set__excludeTags(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____excludeTags = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Oculus::Interaction::TagSetFilter::__cordl_internal_get__requireTagSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireTagSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Oculus::Interaction::TagSetFilter::__cordl_internal_get__requireTagSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireTagSet;
}
constexpr void Oculus::Interaction::TagSetFilter::__cordl_internal_set__requireTagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requireTagSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Oculus::Interaction::TagSetFilter::__cordl_internal_get__excludeTagSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeTagSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Oculus::Interaction::TagSetFilter::__cordl_internal_get__excludeTagSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeTagSet;
}
constexpr void Oculus::Interaction::TagSetFilter::__cordl_internal_set__excludeTagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____excludeTagSet = value;
}
inline void Oculus::Interaction::TagSetFilter::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TagSetFilter::Filter(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"Filter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject);
}
inline bool Oculus::Interaction::TagSetFilter::ContainsRequireTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"ContainsRequireTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSetFilter::AddRequireTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"AddRequireTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSetFilter::RemoveRequireTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"RemoveRequireTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline bool Oculus::Interaction::TagSetFilter::ContainsExcludeTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"ContainsExcludeTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSetFilter::AddExcludeTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"AddExcludeTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSetFilter::RemoveExcludeTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"RemoveExcludeTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Oculus::Interaction::TagSetFilter::InjectOptionalRequireTags(::ArrayW<::StringW>  requireTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"InjectOptionalRequireTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requireTags);
}
inline void Oculus::Interaction::TagSetFilter::InjectOptionalExcludeTags(::ArrayW<::StringW>  excludeTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {"InjectOptionalExcludeTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excludeTags);
}
inline void Oculus::Interaction::TagSetFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TagSetFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TagSetFilter* Oculus::Interaction::TagSetFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TagSetFilter*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IGameObjectFilter"
constexpr  Oculus::Interaction::TagSetFilter::operator ::Oculus::Interaction::IGameObjectFilter*() noexcept {
return static_cast<::Oculus::Interaction::IGameObjectFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IGameObjectFilter"
constexpr ::Oculus::Interaction::IGameObjectFilter* Oculus::Interaction::TagSetFilter::i___Oculus__Interaction__IGameObjectFilter() noexcept {
return static_cast<::Oculus::Interaction::IGameObjectFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TagSetFilter::TagSetFilter()   {
}
