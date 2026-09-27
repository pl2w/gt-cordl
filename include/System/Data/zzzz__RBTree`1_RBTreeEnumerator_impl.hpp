#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_RBTreeEnumerator.hpp"
#include "System/Data/zzzz__RBTree`1_RBTreeEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename K>
inline void GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::_ctor(::System::Data::RBTree_1<K>*  tree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::RBTree_1<K>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tree);
}
template<typename K>
inline void GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::_ctor(::System::Data::RBTree_1<K>*  tree, int32_t  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::RBTree_1<K>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tree, position);
}
template<typename K>
inline void GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename K>
inline bool GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename K>
inline K GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<K>(*this, ___internal_method);
}
template<typename K>
inline ::System::Object* GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename K>
inline void GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<K>"
template<typename K>
constexpr  GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::operator ::System::Collections::Generic::IEnumerator_1<K>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<K>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<K>"
template<typename K>
constexpr ::System::Collections::Generic::IEnumerator_1<K>* GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::i___System__Collections__Generic__IEnumerator_1_K_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<K>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename K>
constexpr  GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename K>
constexpr ::System::IDisposable* GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename K>
constexpr  GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename K>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Data::RBTree_1<K>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_mainTreeNodeId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_current", ty: "K", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::RBTree_1_RBTreeEnumerator(::System::Data::RBTree_1<K>*  _tree, int32_t  _version, int32_t  _index, int32_t  _mainTreeNodeId, K  _current) noexcept  {
this->_tree = _tree;
this->_version = _version;
this->_index = _index;
this->_mainTreeNodeId = _mainTreeNodeId;
this->_current = _current;
}
// Ctor Parameters []
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>::RBTree_1_RBTreeEnumerator()   {
}
