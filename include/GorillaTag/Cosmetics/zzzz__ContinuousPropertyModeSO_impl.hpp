#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyModeSO.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_CastData_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_DescriptionStyle_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_DataFlags_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_Type_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_CastData_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_DescriptionStyle_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_Cast_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_DataFlags_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO.get_GetTestDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::get_GetTestDescription)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d85334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"get_GetTestDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO.IsCastValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)(::GlobalNamespace::ContinuousProperty_Cast)>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::IsCastValid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d8279c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"IsCastValid", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO.GetClosestCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousProperty_Cast (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)(::GlobalNamespace::ContinuousProperty_Cast)>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetClosestCast)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d835cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetClosestCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO.GetFlagsForCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousProperty_DataFlags (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)(::GlobalNamespace::ContinuousProperty_Cast)>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetFlagsForCast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d83644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetFlagsForCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO.GetFlagsForClosestCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousProperty_DataFlags (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)(::GlobalNamespace::ContinuousProperty_Cast)>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetFlagsForClosestCast)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d82920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetFlagsForClosestCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO.GetDescriptionForCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)(::GlobalNamespace::ContinuousProperty_Cast)>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetDescriptionForCast)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x5d81be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetDescriptionForCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO.ListValidCasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::ListValidCasts)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5d823fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"ListValidCasts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyModeSO::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d853d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ContinuousProperty_Type& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::ContinuousProperty_Type const& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_set_type(::GlobalNamespace::ContinuousProperty_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::GlobalNamespace::ContinuousProperty_DataFlags const& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_set_flags(::GlobalNamespace::ContinuousProperty_DataFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
constexpr ::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData>& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_castData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castData;
}
constexpr ::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData> const& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_castData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castData;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_set_castData(::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castData = value;
}
constexpr ::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_descriptionStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptionStyle;
}
constexpr ::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle const& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_descriptionStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptionStyle;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_set_descriptionStyle(::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descriptionStyle = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_afterSentence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterSentence;
}
constexpr ::StringW const& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_afterSentence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterSentence;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_set_afterSentence(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afterSentence = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_replaceDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replaceDescription;
}
constexpr ::StringW const& GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_get_replaceDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replaceDescription;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyModeSO::__cordl_internal_set_replaceDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replaceDescription = value;
}
inline ::StringW GorillaTag::Cosmetics::ContinuousPropertyModeSO::get_GetTestDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"get_GetTestDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousPropertyModeSO::IsCastValid(::GlobalNamespace::ContinuousProperty_Cast  cast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"IsCastValid", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cast);
}
inline ::GlobalNamespace::ContinuousProperty_Cast GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetClosestCast(::GlobalNamespace::ContinuousProperty_Cast  cast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetClosestCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousProperty_Cast>(this, ___internal_method, cast);
}
inline ::GlobalNamespace::ContinuousProperty_DataFlags GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetFlagsForCast(::GlobalNamespace::ContinuousProperty_Cast  cast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetFlagsForCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousProperty_DataFlags>(this, ___internal_method, cast);
}
inline ::GlobalNamespace::ContinuousProperty_DataFlags GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetFlagsForClosestCast(::GlobalNamespace::ContinuousProperty_Cast  cast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetFlagsForClosestCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousProperty_DataFlags>(this, ___internal_method, cast);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousPropertyModeSO::GetDescriptionForCast(::GlobalNamespace::ContinuousProperty_Cast  cast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"GetDescriptionForCast", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, cast);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousPropertyModeSO::ListValidCasts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {"ListValidCasts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyModeSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ContinuousPropertyModeSO* GorillaTag::Cosmetics::ContinuousPropertyModeSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyModeSO::ContinuousPropertyModeSO()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c._ListValidCasts_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousProperty_Cast (::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::*)(::GlobalNamespace::ContinuousPropertyModeSO_CastData)>(&::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::_ListValidCasts_b__15_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>(),
                        {"<ListValidCasts>b__15_0", {}, {::i2c::type_of<::GlobalNamespace::ContinuousPropertyModeSO_CastData>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::setStaticF___9(::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*  value)  {
::cordl_internals::setStaticField<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*, "<>9", ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>(std::forward<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>(value));
}
inline ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c* GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*, "<>9", ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>();
}
inline void GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::setStaticF___9__15_0(::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>*, "<>9__15_0", ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>(std::forward<::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>* GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>*, "<>9__15_0", ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>();
}
inline void GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ContinuousProperty_Cast GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::_ListValidCasts_b__15_0(::GlobalNamespace::ContinuousPropertyModeSO_CastData  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>(),
                        {"<ListValidCasts>b__15_0", {}, {::i2c::type_of<::GlobalNamespace::ContinuousPropertyModeSO_CastData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousProperty_Cast>(this, ___internal_method, x);
}
inline ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c* GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c::ContinuousPropertyModeSO___c()   {
}
