#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/JointCollection.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__JointCollection_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandJointMap_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__JointCollection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::JointCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::JointCollection::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*)>(&::Oculus::Interaction::HandGrab::Visuals::JointCollection::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa4e5c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::JointCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::Visuals::HandJointMap* (::Oculus::Interaction::HandGrab::Visuals::JointCollection::*)(int32_t)>(&::Oculus::Interaction::HandGrab::Visuals::JointCollection::get_Item)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4e5e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Oculus::Interaction::HandGrab::Visuals::JointCollection::__cordl_internal_get__jointIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointIndices;
}
constexpr ::ArrayW<int32_t> const& Oculus::Interaction::HandGrab::Visuals::JointCollection::__cordl_internal_get__jointIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointIndices;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::JointCollection::__cordl_internal_set__jointIndices(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointIndices = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*& Oculus::Interaction::HandGrab::Visuals::JointCollection::__cordl_internal_get__jointMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointMaps;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* const& Oculus::Interaction::HandGrab::Visuals::JointCollection::__cordl_internal_get__jointMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointMaps;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::JointCollection::__cordl_internal_set__jointMaps(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointMaps = value;
}
inline void Oculus::Interaction::HandGrab::Visuals::JointCollection::_ctor(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  joints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joints);
}
inline ::Oculus::Interaction::HandGrab::Visuals::HandJointMap* Oculus::Interaction::HandGrab::Visuals::JointCollection::get_Item(int32_t  jointIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>(this, ___internal_method, jointIndex);
}
inline ::Oculus::Interaction::HandGrab::Visuals::JointCollection* Oculus::Interaction::HandGrab::Visuals::JointCollection::New_ctor(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  joints)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Visuals::JointCollection*>(joints));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Visuals::JointCollection::JointCollection()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::*)()>(&::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0.__ctor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::*)(::Oculus::Interaction::HandGrab::Visuals::HandJointMap*)>(&::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4e5e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0*>(),
                        {"<.ctor>b__0", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::__cordl_internal_get_boneId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneId;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::__cordl_internal_get_boneId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneId;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::__cordl_internal_set_boneId(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneId = value;
}
inline void Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::__ctor_b__0(::Oculus::Interaction::HandGrab::Visuals::HandJointMap*  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0*>(),
                        {"<.ctor>b__0", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bone);
}
inline ::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0* Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0::JointCollection___c__DisplayClass2_0()   {
}
