#pragma once
// IWYU pragma private; include "Oculus/Interaction/UpdateDriverGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__UpdateDriverGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IUpdateDriver_def.hpp"
#include "Oculus/Interaction/zzzz__UpdateDriverGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.get_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::UpdateDriverGroup::*)()>(&::Oculus::Interaction::UpdateDriverGroup::get_IsRootDriver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"get_IsRootDriver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.set_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)(bool)>(&::Oculus::Interaction::UpdateDriverGroup::set_IsRootDriver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"set_IsRootDriver", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.get_Iterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::UpdateDriverGroup::*)()>(&::Oculus::Interaction::UpdateDriverGroup::get_Iterations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"get_Iterations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.set_Iterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)(int32_t)>(&::Oculus::Interaction::UpdateDriverGroup::set_Iterations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"set_Iterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)()>(&::Oculus::Interaction::UpdateDriverGroup::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa444890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)()>(&::Oculus::Interaction::UpdateDriverGroup::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4449a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)()>(&::Oculus::Interaction::UpdateDriverGroup::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4449a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.Drive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)()>(&::Oculus::Interaction::UpdateDriverGroup::Drive)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa4449b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"Drive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.InjectAllUpdateDriverGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*)>(&::Oculus::Interaction::UpdateDriverGroup::InjectAllUpdateDriverGroup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa444ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"InjectAllUpdateDriverGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup.InjectUpdateDrivers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*)>(&::Oculus::Interaction::UpdateDriverGroup::InjectUpdateDrivers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa444ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"InjectUpdateDrivers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup::*)()>(&::Oculus::Interaction::UpdateDriverGroup::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa444cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get__IsRootDriver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
constexpr bool const& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get__IsRootDriver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
constexpr void Oculus::Interaction::UpdateDriverGroup::__cordl_internal_set__IsRootDriver_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRootDriver_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get__updateDrivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateDrivers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get__updateDrivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateDrivers;
}
constexpr void Oculus::Interaction::UpdateDriverGroup::__cordl_internal_set__updateDrivers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateDrivers = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get_Drivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Drivers;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>* const& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get_Drivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Drivers;
}
constexpr void Oculus::Interaction::UpdateDriverGroup::__cordl_internal_set_Drivers(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Drivers = value;
}
constexpr int32_t& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get__iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr int32_t const& Oculus::Interaction::UpdateDriverGroup::__cordl_internal_get__iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr void Oculus::Interaction::UpdateDriverGroup::__cordl_internal_set__iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterations = value;
}
inline bool Oculus::Interaction::UpdateDriverGroup::get_IsRootDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"get_IsRootDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverGroup::set_IsRootDriver(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"set_IsRootDriver", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::UpdateDriverGroup::get_Iterations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"get_Iterations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverGroup::set_Iterations(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"set_Iterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::UpdateDriverGroup::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverGroup::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverGroup::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverGroup::Drive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"Drive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverGroup::InjectAllUpdateDriverGroup(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  updateDrivers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"InjectAllUpdateDriverGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateDrivers);
}
inline void Oculus::Interaction::UpdateDriverGroup::InjectUpdateDrivers(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  updateDrivers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {"InjectUpdateDrivers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateDrivers);
}
inline void Oculus::Interaction::UpdateDriverGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UpdateDriverGroup* Oculus::Interaction::UpdateDriverGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UpdateDriverGroup*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr  Oculus::Interaction::UpdateDriverGroup::operator ::Oculus::Interaction::IUpdateDriver*() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* Oculus::Interaction::UpdateDriverGroup::i___Oculus__Interaction__IUpdateDriver() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UpdateDriverGroup::UpdateDriverGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverGroup___c::*)()>(&::Oculus::Interaction::UpdateDriverGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup___c._Awake_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IUpdateDriver* (::Oculus::Interaction::UpdateDriverGroup___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::UpdateDriverGroup___c::_Awake_b__10_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa444d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup___c*>(),
                        {"<Awake>b__10_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverGroup___c._InjectUpdateDrivers_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::UpdateDriverGroup___c::*)(::Oculus::Interaction::IUpdateDriver*)>(&::Oculus::Interaction::UpdateDriverGroup___c::_InjectUpdateDrivers_b__15_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa444d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup___c*>(),
                        {"<InjectUpdateDrivers>b__15_0", {}, {::i2c::type_of<::Oculus::Interaction::IUpdateDriver*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::UpdateDriverGroup___c::setStaticF___9(::Oculus::Interaction::UpdateDriverGroup___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::UpdateDriverGroup___c*, "<>9", ::Oculus::Interaction::UpdateDriverGroup___c*>(std::forward<::Oculus::Interaction::UpdateDriverGroup___c*>(value));
}
inline ::Oculus::Interaction::UpdateDriverGroup___c* Oculus::Interaction::UpdateDriverGroup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::UpdateDriverGroup___c*, "<>9", ::Oculus::Interaction::UpdateDriverGroup___c*>();
}
inline void Oculus::Interaction::UpdateDriverGroup___c::setStaticF___9__10_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>*, "<>9__10_0", ::Oculus::Interaction::UpdateDriverGroup___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>* Oculus::Interaction::UpdateDriverGroup___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>*, "<>9__10_0", ::Oculus::Interaction::UpdateDriverGroup___c*>();
}
inline void Oculus::Interaction::UpdateDriverGroup___c::setStaticF___9__15_0(::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>*, "<>9__15_0", ::Oculus::Interaction::UpdateDriverGroup___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::UpdateDriverGroup___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>*, "<>9__15_0", ::Oculus::Interaction::UpdateDriverGroup___c*>();
}
inline void Oculus::Interaction::UpdateDriverGroup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IUpdateDriver* Oculus::Interaction::UpdateDriverGroup___c::_Awake_b__10_0(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup___c*>(),
                        {"<Awake>b__10_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IUpdateDriver*>(this, ___internal_method, mono);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::UpdateDriverGroup___c::_InjectUpdateDrivers_b__15_0(::Oculus::Interaction::IUpdateDriver*  driver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverGroup___c*>(),
                        {"<InjectUpdateDrivers>b__15_0", {}, {::i2c::type_of<::Oculus::Interaction::IUpdateDriver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, driver);
}
inline ::Oculus::Interaction::UpdateDriverGroup___c* Oculus::Interaction::UpdateDriverGroup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UpdateDriverGroup___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UpdateDriverGroup___c::UpdateDriverGroup___c()   {
}
