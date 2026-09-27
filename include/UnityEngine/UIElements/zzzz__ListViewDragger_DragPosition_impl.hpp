#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDragger_DragPosition.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_DragPosition_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ListViewDragger_DragPosition.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ListViewDragger_DragPosition::*)(::GlobalNamespace::ListViewDragger_DragPosition)>(&::GlobalNamespace::ListViewDragger_DragPosition::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb886fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ListViewDragger_DragPosition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListViewDragger_DragPosition.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ListViewDragger_DragPosition::*)(::System::Object*)>(&::GlobalNamespace::ListViewDragger_DragPosition::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb887034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(),
                    {::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListViewDragger_DragPosition.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ListViewDragger_DragPosition::*)()>(&::GlobalNamespace::ListViewDragger_DragPosition::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb8870bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(),
                    {::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ListViewDragger_DragPosition::Equals(::GlobalNamespace::ListViewDragger_DragPosition  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ListViewDragger_DragPosition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::ListViewDragger_DragPosition::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::ListViewDragger_DragPosition::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ListViewDragger_DragPosition>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>"
constexpr  GlobalNamespace::ListViewDragger_DragPosition::operator ::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>* GlobalNamespace::ListViewDragger_DragPosition::i___System__IEquatable_1___GlobalNamespace__ListViewDragger_DragPosition_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "childIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ListViewDragger_DragPosition::ListViewDragger_DragPosition(int32_t  insertAtIndex, int32_t  parentId, int32_t  childIndex, ::UnityEngine::UIElements::ReusableCollectionItem*  recycledItem, ::UnityEngine::UIElements::DragAndDropPosition  dropPosition) noexcept  {
this->insertAtIndex = insertAtIndex;
this->parentId = parentId;
this->childIndex = childIndex;
this->recycledItem = recycledItem;
this->dropPosition = dropPosition;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListViewDragger_DragPosition::ListViewDragger_DragPosition()   {
}
