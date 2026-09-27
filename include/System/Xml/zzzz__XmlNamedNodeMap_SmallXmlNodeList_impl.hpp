#pragma once
// IWYU pragma private; include "System/Xml/XmlNamedNodeMap_SmallXmlNodeList.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_SmallXmlNodeList_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::*)()>(&::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::get_Count)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xabcb7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::*)(int32_t)>(&::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::get_Item)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xabcb5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::*)(::System::Object*)>(&::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::Add)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xabda16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::*)(int32_t)>(&::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::RemoveAt)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xabda298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::*)(int32_t, ::System::Object*)>(&::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::Insert)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xabda380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::*)()>(&::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::GetEnumerator)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xabda068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, index);
}
inline void GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "field", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::XmlNamedNodeMap_SmallXmlNodeList(::System::Object*  field) noexcept  {
this->field = field;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList::XmlNamedNodeMap_SmallXmlNodeList()   {
}
