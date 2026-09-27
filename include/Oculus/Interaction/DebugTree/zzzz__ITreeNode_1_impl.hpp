#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/ITreeNode_1.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__ITreeNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<typename TLeaf>
inline TLeaf Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TLeaf>(this, ___internal_method);
}
template<typename TLeaf>
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>* Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>::get_Children()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>*>(this, ___internal_method);
}
