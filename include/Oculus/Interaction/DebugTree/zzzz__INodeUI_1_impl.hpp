#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/INodeUI_1.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__INodeUI_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__ITreeNode_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
template<typename TLeaf>
inline ::UnityW<::UnityEngine::RectTransform> Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>::get_ChildArea()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
template<typename TLeaf>
inline void Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>::Bind(::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*  node, bool  isRoot, bool  isDuplicate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, isRoot, isDuplicate);
}
