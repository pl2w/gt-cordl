#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NativePagedList`1_Enumerator.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativePagedList`1_Enumerator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativePagedList_1_def.hpp"
template<typename T>
inline void GlobalNamespace::NativePagedList_1_Enumerator<T>::_ctor(::UnityEngine::UIElements::UIR::NativePagedList_1<T>*  nativePagedList, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativePagedList_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nativePagedList, offset);
}
template<typename T>
inline bool GlobalNamespace::NativePagedList_1_Enumerator<T>::HasNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativePagedList_1_Enumerator<T>>(),
                        {"HasNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::NativePagedList_1_Enumerator<T>::GetNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativePagedList_1_Enumerator<T>>(),
                        {"GetNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_NativePagedList", ty: "::UnityEngine::UIElements::UIR::NativePagedList_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentPage", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexInCurrentPage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexOfCurrentPage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CountInCurrentPage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativePagedList_1_Enumerator<T>::NativePagedList_1_Enumerator(::UnityEngine::UIElements::UIR::NativePagedList_1<T>*  m_NativePagedList, ::Unity::Collections::NativeArray_1<T>  m_CurrentPage, int32_t  m_IndexInCurrentPage, int32_t  m_IndexOfCurrentPage, int32_t  m_CountInCurrentPage) noexcept  {
this->m_NativePagedList = m_NativePagedList;
this->m_CurrentPage = m_CurrentPage;
this->m_IndexInCurrentPage = m_IndexInCurrentPage;
this->m_IndexOfCurrentPage = m_IndexOfCurrentPage;
this->m_CountInCurrentPage = m_CountInCurrentPage;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativePagedList_1_Enumerator<T>::NativePagedList_1_Enumerator()   {
}
