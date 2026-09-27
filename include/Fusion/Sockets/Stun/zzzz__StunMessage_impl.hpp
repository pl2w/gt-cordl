#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_StunMessageType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunErrorAttribute_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_AttributeType_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_IPFamily_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunMessage_StunMessageType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.get_StunMessageTypeValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<int32_t>* (*)()>(&::Fusion::Sockets::Stun::StunMessage::get_StunMessageTypeValues)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x6038e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_StunMessageTypeValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StunMessage_StunMessageType (::Fusion::Sockets::Stun::StunMessage::*)()>(&::Fusion::Sockets::Stun::StunMessage::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6039224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(::GlobalNamespace::StunMessage_StunMessageType)>(&::Fusion::Sockets::Stun::StunMessage::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_Type", {}, {::i2c::type_of<::GlobalNamespace::StunMessage_StunMessageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Fusion::Sockets::Stun::StunMessage::*)()>(&::Fusion::Sockets::Stun::StunMessage::get_ID)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x603650c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.get_TransactionID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Sockets::Stun::StunMessage::*)()>(&::Fusion::Sockets::Stun::StunMessage::get_TransactionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6039234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_TransactionID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.set_TransactionID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(::ArrayW<uint8_t>)>(&::Fusion::Sockets::Stun::StunMessage::set_TransactionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603923c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_TransactionID", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.get_MappedAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::Fusion::Sockets::Stun::StunMessage::*)()>(&::Fusion::Sockets::Stun::StunMessage::get_MappedAddress)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6036458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_MappedAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.set_MappedAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(::System::Net::IPEndPoint*)>(&::Fusion::Sockets::Stun::StunMessage::set_MappedAddress)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6039244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_MappedAddress", {}, {::i2c::type_of<::System::Net::IPEndPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.get_ErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::Stun::StunErrorAttribute* (::Fusion::Sockets::Stun::StunMessage::*)()>(&::Fusion::Sockets::Stun::StunMessage::get_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60392a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_ErrorCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>* (::Fusion::Sockets::Stun::StunMessage::*)()>(&::Fusion::Sockets::Stun::StunMessage::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60392a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_Attributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.set_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*)>(&::Fusion::Sockets::Stun::StunMessage::set_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60392b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_Attributes", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(::System::Guid, ::GlobalNamespace::StunMessage_StunMessageType)>(&::Fusion::Sockets::Stun::StunMessage::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x60375ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::StunMessage_StunMessageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.IsStunMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t)>(&::Fusion::Sockets::Stun::StunMessage::IsStunMessage)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6034ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"IsStunMessage", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::Stun::StunMessage* (*)(uint8_t*, int32_t)>(&::Fusion::Sockets::Stun::StunMessage::TryParse)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6036220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"TryParse", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Sockets::Stun::StunMessage::*)()>(&::Fusion::Sockets::Stun::StunMessage::Serialize)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6037758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"Serialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.WriteAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::Fusion::Sockets::Stun::StunMessage::WriteAttributes)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x6039520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"WriteAttributes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.ReadAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(uint8_t*, ::by_ref<int32_t>)>(&::Fusion::Sockets::Stun::StunMessage::ReadAttribute)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x60392b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"ReadAttribute", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.ParseEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::Fusion::Sockets::Stun::StunMessage::*)(uint8_t*, ::by_ref<int32_t>)>(&::Fusion::Sockets::Stun::StunMessage::ParseEndPoint)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x603a074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"ParseEndPoint", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.ParseXorEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::Fusion::Sockets::Stun::StunMessage::*)(uint8_t*, ::by_ref<int32_t>)>(&::Fusion::Sockets::Stun::StunMessage::ParseXorEndPoint)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x6039ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"ParseXorEndPoint", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunMessage.StoreEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunMessage::*)(::GlobalNamespace::StunMessage_AttributeType, ::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::Fusion::Sockets::Stun::StunMessage::StoreEndPoint)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6039a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"StoreEndPoint", {}, {::i2c::type_of<::GlobalNamespace::StunMessage_AttributeType>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StunMessage_StunMessageType& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::GlobalNamespace::StunMessage_StunMessageType const& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunMessage::__cordl_internal_set__Type_k__BackingField(::GlobalNamespace::StunMessage_StunMessageType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__TransactionID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransactionID_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__TransactionID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransactionID_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunMessage::__cordl_internal_set__TransactionID_k__BackingField(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TransactionID_k__BackingField = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__UserName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserName_k__BackingField;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__UserName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserName_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunMessage::__cordl_internal_set__UserName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserName_k__BackingField = value;
}
constexpr ::Fusion::Sockets::Stun::StunErrorAttribute*& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__ErrorCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr ::Fusion::Sockets::Stun::StunErrorAttribute* const& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__ErrorCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunMessage::__cordl_internal_set__ErrorCode_k__BackingField(::Fusion::Sockets::Stun::StunErrorAttribute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorCode_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__Attributes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attributes_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>* const& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__Attributes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attributes_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunMessage::__cordl_internal_set__Attributes_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Attributes_k__BackingField = value;
}
constexpr ::System::Guid& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr ::System::Guid const& Fusion::Sockets::Stun::StunMessage::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Fusion::Sockets::Stun::StunMessage::__cordl_internal_set__id(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
inline void Fusion::Sockets::Stun::StunMessage::setStaticF__stunMessageTypeValues(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "_stunMessageTypeValues", ::Fusion::Sockets::Stun::StunMessage*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* Fusion::Sockets::Stun::StunMessage::getStaticF__stunMessageTypeValues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "_stunMessageTypeValues", ::Fusion::Sockets::Stun::StunMessage*>();
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* Fusion::Sockets::Stun::StunMessage::get_StunMessageTypeValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_StunMessageTypeValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<int32_t>*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::StunMessage_StunMessageType Fusion::Sockets::Stun::StunMessage::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StunMessage_StunMessageType>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunMessage::set_Type(::GlobalNamespace::StunMessage_StunMessageType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_Type", {}, {::i2c::type_of<::GlobalNamespace::StunMessage_StunMessageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Fusion::Sockets::Stun::StunMessage::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Fusion::Sockets::Stun::StunMessage::get_TransactionID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_TransactionID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunMessage::set_TransactionID(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_TransactionID", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::IPEndPoint* Fusion::Sockets::Stun::StunMessage::get_MappedAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_MappedAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunMessage::set_MappedAddress(::System::Net::IPEndPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_MappedAddress", {}, {::i2c::type_of<::System::Net::IPEndPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Sockets::Stun::StunErrorAttribute* Fusion::Sockets::Stun::StunMessage::get_ErrorCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_ErrorCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::Stun::StunErrorAttribute*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>* Fusion::Sockets::Stun::StunMessage::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"get_Attributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunMessage::set_Attributes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"set_Attributes", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Sockets::Stun::StunMessage::_ctor(::System::Guid  msgID, ::GlobalNamespace::StunMessage_StunMessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::StunMessage_StunMessageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msgID, messageType);
}
inline bool Fusion::Sockets::Stun::StunMessage::IsStunMessage(uint8_t*  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"IsStunMessage", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, length);
}
inline ::Fusion::Sockets::Stun::StunMessage* Fusion::Sockets::Stun::StunMessage::TryParse(uint8_t*  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"TryParse", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::Stun::StunMessage*>(nullptr, ___internal_method, data, length);
}
inline ::ArrayW<uint8_t> Fusion::Sockets::Stun::StunMessage::Serialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"Serialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunMessage::WriteAttributes(::ArrayW<uint8_t>  msg, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"WriteAttributes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, offset);
}
inline void Fusion::Sockets::Stun::StunMessage::ReadAttribute(uint8_t*  data, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"ReadAttribute", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset);
}
inline ::System::Net::IPEndPoint* Fusion::Sockets::Stun::StunMessage::ParseEndPoint(uint8_t*  data, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"ParseEndPoint", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method, data, offset);
}
inline ::System::Net::IPEndPoint* Fusion::Sockets::Stun::StunMessage::ParseXorEndPoint(uint8_t*  data, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"ParseXorEndPoint", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method, data, offset);
}
inline void Fusion::Sockets::Stun::StunMessage::StoreEndPoint(::GlobalNamespace::StunMessage_AttributeType  type, ::System::Net::IPEndPoint*  endPoint, ::ArrayW<uint8_t>  message, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunMessage*>(),
                        {"StoreEndPoint", {}, {::i2c::type_of<::GlobalNamespace::StunMessage_AttributeType>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, endPoint, message, offset);
}
inline ::Fusion::Sockets::Stun::StunMessage* Fusion::Sockets::Stun::StunMessage::New_ctor(::System::Guid  msgID, ::GlobalNamespace::StunMessage_StunMessageType  messageType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunMessage*>(msgID, messageType));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunMessage::StunMessage()   {
}
