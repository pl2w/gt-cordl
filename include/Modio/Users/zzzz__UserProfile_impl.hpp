#pragma once
// IWYU pragma private; include "Modio/Users/UserProfile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_def.hpp"
#include "Modio/Reports/zzzz__ReportType_def.hpp"
#include "Modio/Users/zzzz__UserProfile_AvatarResolution_def.hpp"
#include "Modio/Users/zzzz__UserProfile__Mute_d__39_def.hpp"
#include "Modio/Users/zzzz__UserProfile__Report_d__41_def.hpp"
#include "Modio/Users/zzzz__UserProfile__UnMute_d__40_def.hpp"
#include "Modio/Users/zzzz__Wallet_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::Users::UserProfile.add_OnProfileUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::System::Action*)>(&::Modio::Users::UserProfile::add_OnProfileUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa0252cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"add_OnProfileUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.remove_OnProfileUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::System::Action*)>(&::Modio::Users::UserProfile::remove_OnProfileUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa025368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"remove_OnProfileUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa025404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Users::UserProfile*>(),
                    {::i2c::class_of<::Modio::Users::UserProfile*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.get_Username
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::get_Username)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa025420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Username", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.set_Username
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::StringW)>(&::Modio::Users::UserProfile::set_Username)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa025428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Username", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::get_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa025430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(int64_t)>(&::Modio::Users::UserProfile::set_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa025438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_UserId", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.get_PortalUsername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::get_PortalUsername)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa025440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_PortalUsername", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.set_PortalUsername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::StringW)>(&::Modio::Users::UserProfile::set_PortalUsername)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa025448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_PortalUsername", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.GetWallet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::Wallet* (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::GetWallet)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa025450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"GetWallet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.get_Avatar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>* (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::get_Avatar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0254c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Avatar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.set_Avatar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*)>(&::Modio::Users::UserProfile::set_Avatar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0254cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Avatar", {}, {::i2c::type_of<::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.get_Timezone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::get_Timezone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0254d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Timezone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.set_Timezone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::StringW)>(&::Modio::Users::UserProfile::set_Timezone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0254dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Timezone", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.get_Language
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::get_Language)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0254e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Language", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.set_Language
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::StringW)>(&::Modio::Users::UserProfile::set_Language)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0254ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Language", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::Modio::API::SchemaDefinitions::UserObject)>(&::Modio::Users::UserProfile::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa0254f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02553c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.ApplyDetailsFromUserObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserProfile::*)(::Modio::API::SchemaDefinitions::UserObject)>(&::Modio::Users::UserProfile::ApplyDetailsFromUserObject)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa022858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"ApplyDetailsFromUserObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::UserProfile* (*)(::Modio::API::SchemaDefinitions::UserObject)>(&::Modio::Users::UserProfile::Get)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa025544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Get", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Users::UserProfile*, ::Modio::Users::UserProfile*)>(&::Modio::Users::UserProfile::op_Equality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa025644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Modio::Users::UserProfile*>(), ::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Users::UserProfile*, ::Modio::Users::UserProfile*)>(&::Modio::Users::UserProfile::op_Inequality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa02564c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Modio::Users::UserProfile*>(), ::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::UserProfile::*)(::Modio::Users::UserProfile*)>(&::Modio::Users::UserProfile::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa025668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::UserProfile::*)(::System::Object*)>(&::Modio::Users::UserProfile::Equals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa025698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Users::UserProfile*>(),
                    {::i2c::class_of<::Modio::Users::UserProfile*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.Mute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::Mute)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa025794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Mute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.UnMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::UserProfile::*)()>(&::Modio::Users::UserProfile::UnMute)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa02589c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"UnMute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::UserProfile.Report
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::UserProfile::*)(::Modio::Reports::ReportType, ::StringW, ::StringW)>(&::Modio::Users::UserProfile::Report)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa0259a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Report", {}, {::i2c::type_of<::Modio::Reports::ReportType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Modio::Users::UserProfile::__cordl_internal_get_OnProfileUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProfileUpdated;
}
constexpr ::System::Action* const& Modio::Users::UserProfile::__cordl_internal_get_OnProfileUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProfileUpdated;
}
constexpr void Modio::Users::UserProfile::__cordl_internal_set_OnProfileUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnProfileUpdated = value;
}
constexpr ::StringW& Modio::Users::UserProfile::__cordl_internal_get__Username_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Username_k__BackingField;
}
constexpr ::StringW const& Modio::Users::UserProfile::__cordl_internal_get__Username_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Username_k__BackingField;
}
constexpr void Modio::Users::UserProfile::__cordl_internal_set__Username_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Username_k__BackingField = value;
}
constexpr int64_t& Modio::Users::UserProfile::__cordl_internal_get__UserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr int64_t const& Modio::Users::UserProfile::__cordl_internal_get__UserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr void Modio::Users::UserProfile::__cordl_internal_set__UserId_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserId_k__BackingField = value;
}
constexpr ::StringW& Modio::Users::UserProfile::__cordl_internal_get__PortalUsername_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PortalUsername_k__BackingField;
}
constexpr ::StringW const& Modio::Users::UserProfile::__cordl_internal_get__PortalUsername_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PortalUsername_k__BackingField;
}
constexpr void Modio::Users::UserProfile::__cordl_internal_set__PortalUsername_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PortalUsername_k__BackingField = value;
}
constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*& Modio::Users::UserProfile::__cordl_internal_get__Avatar_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Avatar_k__BackingField;
}
constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>* const& Modio::Users::UserProfile::__cordl_internal_get__Avatar_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Avatar_k__BackingField;
}
constexpr void Modio::Users::UserProfile::__cordl_internal_set__Avatar_k__BackingField(::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Avatar_k__BackingField = value;
}
constexpr ::StringW& Modio::Users::UserProfile::__cordl_internal_get__Timezone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timezone_k__BackingField;
}
constexpr ::StringW const& Modio::Users::UserProfile::__cordl_internal_get__Timezone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timezone_k__BackingField;
}
constexpr void Modio::Users::UserProfile::__cordl_internal_set__Timezone_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Timezone_k__BackingField = value;
}
constexpr ::StringW& Modio::Users::UserProfile::__cordl_internal_get__Language_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Language_k__BackingField;
}
constexpr ::StringW const& Modio::Users::UserProfile::__cordl_internal_get__Language_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Language_k__BackingField;
}
constexpr void Modio::Users::UserProfile::__cordl_internal_set__Language_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Language_k__BackingField = value;
}
inline void Modio::Users::UserProfile::setStaticF__cache(::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>*, "_cache", ::Modio::Users::UserProfile*>(std::forward<::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>* Modio::Users::UserProfile::getStaticF__cache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>*, "_cache", ::Modio::Users::UserProfile*>();
}
inline void Modio::Users::UserProfile::add_OnProfileUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"add_OnProfileUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Users::UserProfile::remove_OnProfileUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"remove_OnProfileUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Users::UserProfile::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Users::UserProfile*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Modio::Users::UserProfile::get_Username()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Username", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Users::UserProfile::set_Username(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Username", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Users::UserProfile::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Users::UserProfile::set_UserId(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_UserId", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Users::UserProfile::get_PortalUsername()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_PortalUsername", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Users::UserProfile::set_PortalUsername(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_PortalUsername", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Users::Wallet* Modio::Users::UserProfile::GetWallet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"GetWallet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::Wallet*>(this, ___internal_method);
}
inline ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>* Modio::Users::UserProfile::get_Avatar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Avatar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*>(this, ___internal_method);
}
inline void Modio::Users::UserProfile::set_Avatar(::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Avatar", {}, {::i2c::type_of<::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Users::UserProfile::get_Timezone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Timezone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Users::UserProfile::set_Timezone(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Timezone", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Users::UserProfile::get_Language()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"get_Language", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Users::UserProfile::set_Language(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"set_Language", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Users::UserProfile::_ctor(::Modio::API::SchemaDefinitions::UserObject  userObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userObject);
}
inline void Modio::Users::UserProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Users::UserProfile::ApplyDetailsFromUserObject(::Modio::API::SchemaDefinitions::UserObject  userObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"ApplyDetailsFromUserObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userObject);
}
inline ::Modio::Users::UserProfile* Modio::Users::UserProfile::Get(::Modio::API::SchemaDefinitions::UserObject  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Get", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::UserProfile*>(nullptr, ___internal_method, user);
}
inline bool Modio::Users::UserProfile::op_Equality(::Modio::Users::UserProfile*  left, ::Modio::Users::UserProfile*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Modio::Users::UserProfile*>(), ::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Modio::Users::UserProfile::op_Inequality(::Modio::Users::UserProfile*  left, ::Modio::Users::UserProfile*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Modio::Users::UserProfile*>(), ::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Modio::Users::UserProfile::Equals(::Modio::Users::UserProfile*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Modio::Users::UserProfile::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Users::UserProfile*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::UserProfile::Mute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Mute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::UserProfile::UnMute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"UnMute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::UserProfile::Report(::Modio::Reports::ReportType  reportType, ::StringW  contact, ::StringW  summary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserProfile*>(),
                        {"Report", {}, {::i2c::type_of<::Modio::Reports::ReportType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, reportType, contact, summary);
}
inline ::Modio::Users::UserProfile* Modio::Users::UserProfile::New_ctor(::Modio::API::SchemaDefinitions::UserObject  userObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::UserProfile*>(userObject));
}
inline ::Modio::Users::UserProfile* Modio::Users::UserProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::UserProfile*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::Modio::Users::UserProfile*>"
constexpr  Modio::Users::UserProfile::operator ::System::IEquatable_1<::Modio::Users::UserProfile*>*() noexcept {
return static_cast<::System::IEquatable_1<::Modio::Users::UserProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Modio::Users::UserProfile*>"
constexpr ::System::IEquatable_1<::Modio::Users::UserProfile*>* Modio::Users::UserProfile::i___System__IEquatable_1___Modio__Users__UserProfile__() noexcept {
return static_cast<::System::IEquatable_1<::Modio::Users::UserProfile*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Users::UserProfile::UserProfile()   {
}
