#pragma once
// IWYU pragma private; include "XNode/SceneGraph_1.hpp"
#include "XNode/zzzz__SceneGraph_impl.hpp"
#include "XNode/zzzz__SceneGraph_1_def.hpp"
template<typename T>
inline T XNode::SceneGraph_1<T>::get_graph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::SceneGraph_1<T>*>(),
                        {"get_graph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void XNode::SceneGraph_1<T>::set_graph(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::SceneGraph_1<T>*>(),
                        {"set_graph", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void XNode::SceneGraph_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::SceneGraph_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::XNode::SceneGraph_1<T>* XNode::SceneGraph_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::SceneGraph_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::XNode::SceneGraph_1<T>::SceneGraph_1()   {
}
