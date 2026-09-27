#pragma once
// IWYU pragma private; include "Fusion/SessionInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SessionInfo_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::SessionInfo.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(::StringW)>(&::Fusion::SessionInfo::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.get_Region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_Region", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.set_Region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(::StringW)>(&::Fusion::SessionInfo::set_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_Region", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.set_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(bool)>(&::Fusion::SessionInfo::set_IsVisible)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f7a8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.get_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_IsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.set_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(bool)>(&::Fusion::SessionInfo::set_IsOpen)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f7a9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>* (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7aab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.set_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*)>(&::Fusion::SessionInfo::set_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7aabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_Properties", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.get_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_PlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7aac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.set_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(int32_t)>(&::Fusion::SessionInfo::set_PlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7aacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_PlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.get_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::get_MaxPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7aad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.set_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(int32_t)>(&::Fusion::SessionInfo::set_MaxPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7aadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::SessionInfo*)>(&::Fusion::SessionInfo::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f7aae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionInfo::*)(::Fusion::NetworkRunner*)>(&::Fusion::SessionInfo::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f73d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.UpdateCustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SessionInfo::*)(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*)>(&::Fusion::SessionInfo::UpdateCustomProperties)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5f7aaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"UpdateCustomProperties", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SessionInfo::*)()>(&::Fusion::SessionInfo::ToString)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5f7ae1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SessionInfo*>(),
                    {::i2c::class_of<::Fusion::SessionInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::SessionInfo::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Fusion::SessionInfo::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::StringW& Fusion::SessionInfo::__cordl_internal_get__Region_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Region_k__BackingField;
}
constexpr ::StringW const& Fusion::SessionInfo::__cordl_internal_get__Region_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Region_k__BackingField;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__Region_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Region_k__BackingField = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*& Fusion::SessionInfo::__cordl_internal_get__Properties_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Properties_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>* const& Fusion::SessionInfo::__cordl_internal_get__Properties_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Properties_k__BackingField;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__Properties_k__BackingField(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Properties_k__BackingField = value;
}
constexpr int32_t& Fusion::SessionInfo::__cordl_internal_get__PlayerCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerCount_k__BackingField;
}
constexpr int32_t const& Fusion::SessionInfo::__cordl_internal_get__PlayerCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerCount_k__BackingField;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__PlayerCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerCount_k__BackingField = value;
}
constexpr int32_t& Fusion::SessionInfo::__cordl_internal_get__MaxPlayers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxPlayers_k__BackingField;
}
constexpr int32_t const& Fusion::SessionInfo::__cordl_internal_get__MaxPlayers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxPlayers_k__BackingField;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__MaxPlayers_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxPlayers_k__BackingField = value;
}
constexpr bool& Fusion::SessionInfo::__cordl_internal_get__isValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValid;
}
constexpr bool const& Fusion::SessionInfo::__cordl_internal_get__isValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValid;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__isValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isValid = value;
}
constexpr bool& Fusion::SessionInfo::__cordl_internal_get__isOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOpen;
}
constexpr bool const& Fusion::SessionInfo::__cordl_internal_get__isOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOpen;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__isOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOpen = value;
}
constexpr bool& Fusion::SessionInfo::__cordl_internal_get__isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible;
}
constexpr bool const& Fusion::SessionInfo::__cordl_internal_get__isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVisible = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::SessionInfo::__cordl_internal_get__runner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::SessionInfo::__cordl_internal_get__runner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr void Fusion::SessionInfo::__cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runner = value;
}
inline bool Fusion::SessionInfo::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::SessionInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::SessionInfo::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::SessionInfo::get_Region()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_Region", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::SessionInfo::set_Region(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_Region", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::SessionInfo::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::SessionInfo::set_IsVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::SessionInfo::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_IsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::SessionInfo::set_IsOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>* Fusion::SessionInfo::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*>(this, ___internal_method);
}
inline void Fusion::SessionInfo::set_Properties(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_Properties", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::SessionInfo::get_PlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::SessionInfo::set_PlayerCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_PlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::SessionInfo::get_MaxPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::SessionInfo::set_MaxPlayers(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::SessionInfo::op_Implicit_bool(::Fusion::SessionInfo*  sessionInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sessionInfo);
}
inline void Fusion::SessionInfo::_ctor(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline bool Fusion::SessionInfo::UpdateCustomProperties(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionInfo*>(),
                        {"UpdateCustomProperties", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, customProperties);
}
inline ::StringW Fusion::SessionInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SessionInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::SessionInfo* Fusion::SessionInfo::New_ctor(::Fusion::NetworkRunner*  runner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SessionInfo*>(runner));
}
// Ctor Parameters []
constexpr ::Fusion::SessionInfo::SessionInfo()   {
}
