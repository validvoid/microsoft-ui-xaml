// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "RefreshContainer.h"

CppWinRTActivatableClassWithDPFactory(RefreshContainer)

GlobalDependencyProperty RefreshContainerProperties::s_PullDirectionProperty{ nullptr };
GlobalDependencyProperty RefreshContainerProperties::s_VisualizerProperty{ nullptr };

RefreshContainerProperties::RefreshContainerProperties()
    : m_refreshRequestedEventSource{static_cast<RefreshContainer*>(this)}
{
    EnsureProperties();
}

void RefreshContainerProperties::EnsureProperties()
{
    if (!s_PullDirectionProperty)
    {
        s_PullDirectionProperty =
            InitializeDependencyProperty(
                L"PullDirection",
                winrt::name_of<winrt::RefreshPullDirection>(),
                winrt::name_of<winrt::RefreshContainer>(),
                false /* isAttached */,
                ValueHelper<winrt::RefreshPullDirection>::BoxValueIfNecessary(winrt::RefreshPullDirection::TopToBottom),
                winrt::PropertyChangedCallback(&OnPullDirectionPropertyChanged));
    }
    if (!s_VisualizerProperty)
    {
        s_VisualizerProperty =
            InitializeDependencyProperty(
                L"Visualizer",
                winrt::name_of<winrt::RefreshVisualizer>(),
                winrt::name_of<winrt::RefreshContainer>(),
                false /* isAttached */,
                ValueHelper<winrt::RefreshVisualizer>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnVisualizerPropertyChanged));
    }
}

void RefreshContainerProperties::ClearProperties()
{
    s_PullDirectionProperty = nullptr;
    s_VisualizerProperty = nullptr;
}

void RefreshContainerProperties::OnPullDirectionPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::RefreshContainer>();
    winrt::get_self<RefreshContainer>(owner)->OnPropertyChanged(args);
}

void RefreshContainerProperties::OnVisualizerPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::RefreshContainer>();
    winrt::get_self<RefreshContainer>(owner)->OnPropertyChanged(args);
}

void RefreshContainerProperties::PullDirection(winrt::RefreshPullDirection const& value)
{
    static_cast<RefreshContainer*>(this)->SetValue(s_PullDirectionProperty, ValueHelper<winrt::RefreshPullDirection>::BoxValueIfNecessary(value));
}

winrt::RefreshPullDirection RefreshContainerProperties::PullDirection()
{
    return ValueHelper<winrt::RefreshPullDirection>::CastOrUnbox(static_cast<RefreshContainer*>(this)->GetValue(s_PullDirectionProperty));
}

void RefreshContainerProperties::Visualizer(winrt::RefreshVisualizer const& value)
{
    static_cast<RefreshContainer*>(this)->SetValue(s_VisualizerProperty, ValueHelper<winrt::RefreshVisualizer>::BoxValueIfNecessary(value));
}

winrt::RefreshVisualizer RefreshContainerProperties::Visualizer()
{
    return ValueHelper<winrt::RefreshVisualizer>::CastOrUnbox(static_cast<RefreshContainer*>(this)->GetValue(s_VisualizerProperty));
}

winrt::event_token RefreshContainerProperties::RefreshRequested(winrt::TypedEventHandler<winrt::RefreshContainer, winrt::RefreshRequestedEventArgs> const& value)
{
    return m_refreshRequestedEventSource.add(value);
}

void RefreshContainerProperties::RefreshRequested(winrt::event_token const& token)
{
    m_refreshRequestedEventSource.remove(token);
}
