#pragma once
// IWYU pragma private; include "Modio/Mods/GameTagCategory.hpp"
#include "Modio/Mods/zzzz__ModTag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__GameTagCategory_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionObject_def.hpp"
#include "Modio/Mods/zzzz__GameTagCategory__GetGameTagOptions_d__9_def.hpp"
#include "Modio/Mods/zzzz__GameTagCategory_def.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Mods::GameTagCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::GameTagCategory::*)(::StringW, bool, ::ArrayW<::Modio::Mods::ModTag*>, bool, bool)>(&::Modio::Mods::GameTagCategory::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa02691c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::Modio::Mods::ModTag*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::GameTagCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::GameTagCategory::*)(::Modio::API::SchemaDefinitions::GameTagOptionObject)>(&::Modio::Mods::GameTagCategory::_ctor)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xa02698c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::GameTagOptionObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::GameTagCategory.GetGameTagOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::GameTagCategory*>>>* (*)()>(&::Modio::Mods::GameTagCategory::GetGameTagOptions)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa026f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory*>(),
                        {"GetGameTagOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Mods::GameTagCategory::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Modio::Mods::GameTagCategory::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Modio::Mods::GameTagCategory::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr bool& Modio::Mods::GameTagCategory::__cordl_internal_get_MultiSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiSelect;
}
constexpr bool const& Modio::Mods::GameTagCategory::__cordl_internal_get_MultiSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiSelect;
}
constexpr void Modio::Mods::GameTagCategory::__cordl_internal_set_MultiSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultiSelect = value;
}
constexpr ::ArrayW<::Modio::Mods::ModTag*>& Modio::Mods::GameTagCategory::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::ArrayW<::Modio::Mods::ModTag*> const& Modio::Mods::GameTagCategory::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void Modio::Mods::GameTagCategory::__cordl_internal_set_Tags(::ArrayW<::Modio::Mods::ModTag*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tags = value;
}
constexpr bool& Modio::Mods::GameTagCategory::__cordl_internal_get_Hidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hidden;
}
constexpr bool const& Modio::Mods::GameTagCategory::__cordl_internal_get_Hidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hidden;
}
constexpr void Modio::Mods::GameTagCategory::__cordl_internal_set_Hidden(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hidden = value;
}
constexpr bool& Modio::Mods::GameTagCategory::__cordl_internal_get_Locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr bool const& Modio::Mods::GameTagCategory::__cordl_internal_get_Locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr void Modio::Mods::GameTagCategory::__cordl_internal_set_Locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Locked = value;
}
inline void Modio::Mods::GameTagCategory::setStaticF__cachedTags(::ArrayW<::Modio::Mods::GameTagCategory*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Modio::Mods::GameTagCategory*>, "_cachedTags", ::Modio::Mods::GameTagCategory*>(std::forward<::ArrayW<::Modio::Mods::GameTagCategory*>>(value));
}
inline ::ArrayW<::Modio::Mods::GameTagCategory*> Modio::Mods::GameTagCategory::getStaticF__cachedTags()  {
return ::cordl_internals::getStaticField<::ArrayW<::Modio::Mods::GameTagCategory*>, "_cachedTags", ::Modio::Mods::GameTagCategory*>();
}
inline void Modio::Mods::GameTagCategory::_ctor(::StringW  name, bool  multiSelect, ::ArrayW<::Modio::Mods::ModTag*>  tags, bool  hidden, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::Modio::Mods::ModTag*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, multiSelect, tags, hidden, locked);
}
inline void Modio::Mods::GameTagCategory::_ctor(::Modio::API::SchemaDefinitions::GameTagOptionObject  tagObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::GameTagOptionObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagObject);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::GameTagCategory*>>>* Modio::Mods::GameTagCategory::GetGameTagOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory*>(),
                        {"GetGameTagOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::GameTagCategory*>>>*>(nullptr, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::Modio::Mods::GameTagCategory* Modio::Mods::GameTagCategory::New_ctor(::StringW  name, bool  multiSelect, ::ArrayW<::Modio::Mods::ModTag*>  tags, bool  hidden, bool  locked)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::GameTagCategory*>(name, multiSelect, tags, hidden, locked));
}
inline ::Modio::Mods::GameTagCategory* Modio::Mods::GameTagCategory::New_ctor(::Modio::API::SchemaDefinitions::GameTagOptionObject  tagObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::GameTagCategory*>(tagObject));
}
// Ctor Parameters []
constexpr ::Modio::Mods::GameTagCategory::GameTagCategory()   {
}
//  Writing Method size for method: ::Modio::Mods::GameTagCategory___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::GameTagCategory___c::*)()>(&::Modio::Mods::GameTagCategory___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0270c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::GameTagCategory___c.__cctor_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::GameTagCategory___c::*)()>(&::Modio::Mods::GameTagCategory___c::__cctor_b__8_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa0270c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory___c*>(),
                        {"<.cctor>b__8_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::GameTagCategory___c._GetGameTagOptions_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::GameTagCategory* (::Modio::Mods::GameTagCategory___c::*)(::Modio::API::SchemaDefinitions::GameTagOptionObject)>(&::Modio::Mods::GameTagCategory___c::_GetGameTagOptions_b__9_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa02712c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory___c*>(),
                        {"<GetGameTagOptions>b__9_0", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::GameTagOptionObject>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Mods::GameTagCategory___c::setStaticF___9(::Modio::Mods::GameTagCategory___c*  value)  {
::cordl_internals::setStaticField<::Modio::Mods::GameTagCategory___c*, "<>9", ::Modio::Mods::GameTagCategory___c*>(std::forward<::Modio::Mods::GameTagCategory___c*>(value));
}
inline ::Modio::Mods::GameTagCategory___c* Modio::Mods::GameTagCategory___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Mods::GameTagCategory___c*, "<>9", ::Modio::Mods::GameTagCategory___c*>();
}
inline void Modio::Mods::GameTagCategory___c::setStaticF___9__9_0(::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>*, "<>9__9_0", ::Modio::Mods::GameTagCategory___c*>(std::forward<::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>*>(value));
}
inline ::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>* Modio::Mods::GameTagCategory___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>*, "<>9__9_0", ::Modio::Mods::GameTagCategory___c*>();
}
inline void Modio::Mods::GameTagCategory___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Mods::GameTagCategory___c::__cctor_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory___c*>(),
                        {"<.cctor>b__8_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Mods::GameTagCategory* Modio::Mods::GameTagCategory___c::_GetGameTagOptions_b__9_0(::Modio::API::SchemaDefinitions::GameTagOptionObject  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameTagCategory___c*>(),
                        {"<GetGameTagOptions>b__9_0", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::GameTagOptionObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::GameTagCategory*>(this, ___internal_method, options);
}
inline ::Modio::Mods::GameTagCategory___c* Modio::Mods::GameTagCategory___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::GameTagCategory___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Mods::GameTagCategory___c::GameTagCategory___c()   {
}
